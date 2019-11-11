﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "common.h"
#include "ProgressRing.h"
#include "RuntimeProfiler.h"
#include "ResourceAccessor.h"

ProgressRing::ProgressRing()
{
    __RP_Marker_ClassById(RuntimeProfiler::ProfId_ProgressRing);

    SetDefaultStyleKey(this);

    RegisterPropertyChangedCallback(winrt::RangeBase::ValueProperty(), { this, &ProgressRing::OnRangeBasePropertyChanged });
    SizeChanged({ this, &ProgressRing::OnSizeChanged });
}

void ProgressRing::OnApplyTemplate()
{
    winrt::IControlProtected controlProtected{ *this };

    // TODO: Implement

    m_layoutRoot.set(GetTemplateChildT<winrt::Grid>(s_LayoutRootName, controlProtected));
    m_outlineFigure.set(GetTemplateChildT<winrt::Windows::UI::Xaml::Media::PathFigure>(s_OutlineFigureName, controlProtected));
    m_outlineArc.set(GetTemplateChildT<winrt::Windows::UI::Xaml::Media::ArcSegment>(s_OutlineArcName, controlProtected));
    m_barFigure.set(GetTemplateChildT<winrt::Windows::UI::Xaml::Media::PathFigure>(s_BarFigureName, controlProtected));
    m_barArc.set(GetTemplateChildT<winrt::Windows::UI::Xaml::Media::ArcSegment>(s_BarArcName, controlProtected));

    RenderAll();
}

void  ProgressRing::OnPropertyChanged(const winrt::DependencyPropertyChangedEventArgs& args)
{
    winrt::IDependencyProperty property = args.Property();
    
    // TODO: Implement
}

void ProgressRing::OnSizeChanged(const winrt::IInspectable&, const winrt::IInspectable&)
{
    RenderAll();
}

void ProgressRing::OnRangeBasePropertyChanged(const winrt::DependencyObject& sender, const winrt::DependencyProperty& args)
{
    // TODO
}

winrt::Windows::Foundation::Size ProgressRing::ComputeEllipseSize(const double thickness)
{
    const double safeThickness = std::max(thickness, static_cast<double>(0.0));
    const double actualWidth = ProgressRing::Width();
    const double width = std::max((ProgressRing::Width() - safeThickness) / 2.0, 0.0);
    const double height = std::max((ProgressRing::Height() - safeThickness) / 2.0, 0.0);

    return winrt::Windows::Foundation::Size(static_cast<float>(width), static_cast<float>(height));
}


void ProgressRing::RenderSegment()
{
    if (auto&& progressRing = m_layoutRoot.get())
    {
        auto&& barFigure = m_barFigure.get();
        auto&& barArc = m_barArc.get();
        const double maximum = Maximum();
        const double minimum = Minimum();

        barArc.Point(winrt::Windows::Foundation::Point(4, 4));
    }
}

void ProgressRing::RenderAll()
{
    if (auto&& progressRing = m_layoutRoot.get())
    {
        auto&& outlineFigure = m_outlineFigure.get();
        auto&& outlineArc = m_outlineArc.get();
        auto&& barFigure = m_barFigure.get();
        auto&& barArc = m_barArc.get();

        const double thickness = ProgressRing::BorderThickness().Top;
        const auto size = ComputeEllipseSize(thickness);

        const float segmentWidth = size.Width;
        const float translationFactor = static_cast<float>(std::max(thickness / 2.0, 0.0));

        outlineFigure.StartPoint(winrt::Windows::Foundation::Point(segmentWidth + translationFactor, translationFactor));
        barFigure.StartPoint(winrt::Windows::Foundation::Point(segmentWidth + translationFactor, translationFactor));
        outlineArc.Size(winrt::Windows::Foundation::Size(segmentWidth, size.Height));
        barArc.Size(winrt::Windows::Foundation::Size(segmentWidth, size.Height));
        outlineArc.Point(winrt::Windows::Foundation::Point(segmentWidth + translationFactor - 0.05f, translationFactor));

        RenderSegment();
    }
}