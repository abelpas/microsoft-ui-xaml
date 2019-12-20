// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ProgressBarTemplateSettings.h"

CppWinRTActivatableClassWithDPFactory(ProgressBarTemplateSettings)

GlobalDependencyProperty ProgressBarTemplateSettingsProperties::s_ClipRectProperty{ nullptr };
GlobalDependencyProperty ProgressBarTemplateSettingsProperties::s_ContainerAnimationEndPositionProperty{ nullptr };
GlobalDependencyProperty ProgressBarTemplateSettingsProperties::s_ContainerAnimationEndPosition2Property{ nullptr };
GlobalDependencyProperty ProgressBarTemplateSettingsProperties::s_ContainerAnimationMidPositionProperty{ nullptr };
GlobalDependencyProperty ProgressBarTemplateSettingsProperties::s_ContainerAnimationStartPositionProperty{ nullptr };
GlobalDependencyProperty ProgressBarTemplateSettingsProperties::s_ContainerAnimationStartPosition2Property{ nullptr };
GlobalDependencyProperty ProgressBarTemplateSettingsProperties::s_IndicatorLengthDeltaProperty{ nullptr };

ProgressBarTemplateSettingsProperties::ProgressBarTemplateSettingsProperties()
{
    EnsureProperties();
}

void ProgressBarTemplateSettingsProperties::EnsureProperties()
{
    if (!s_ClipRectProperty)
    {
        s_ClipRectProperty =
            InitializeDependencyProperty(
                L"ClipRect",
                winrt::name_of<winrt::RectangleGeometry>(),
                winrt::name_of<winrt::ProgressBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::RectangleGeometry>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ContainerAnimationEndPositionProperty)
    {
        s_ContainerAnimationEndPositionProperty =
            InitializeDependencyProperty(
                L"ContainerAnimationEndPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ProgressBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ContainerAnimationEndPosition2Property)
    {
        s_ContainerAnimationEndPosition2Property =
            InitializeDependencyProperty(
                L"ContainerAnimationEndPosition2",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ProgressBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ContainerAnimationMidPositionProperty)
    {
        s_ContainerAnimationMidPositionProperty =
            InitializeDependencyProperty(
                L"ContainerAnimationMidPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ProgressBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ContainerAnimationStartPositionProperty)
    {
        s_ContainerAnimationStartPositionProperty =
            InitializeDependencyProperty(
                L"ContainerAnimationStartPosition",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ProgressBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_ContainerAnimationStartPosition2Property)
    {
        s_ContainerAnimationStartPosition2Property =
            InitializeDependencyProperty(
                L"ContainerAnimationStartPosition2",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ProgressBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_IndicatorLengthDeltaProperty)
    {
        s_IndicatorLengthDeltaProperty =
            InitializeDependencyProperty(
                L"IndicatorLengthDelta",
                winrt::name_of<double>(),
                winrt::name_of<winrt::ProgressBarTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<double>::BoxedDefaultValue(),
                nullptr);
    }
}

void ProgressBarTemplateSettingsProperties::ClearProperties()
{
    s_ClipRectProperty = nullptr;
    s_ContainerAnimationEndPositionProperty = nullptr;
    s_ContainerAnimationEndPosition2Property = nullptr;
    s_ContainerAnimationMidPositionProperty = nullptr;
    s_ContainerAnimationStartPositionProperty = nullptr;
    s_ContainerAnimationStartPosition2Property = nullptr;
    s_IndicatorLengthDeltaProperty = nullptr;
}

void ProgressBarTemplateSettingsProperties::ClipRect(winrt::RectangleGeometry const& value)
{
    static_cast<ProgressBarTemplateSettings*>(this)->SetValue(s_ClipRectProperty, ValueHelper<winrt::RectangleGeometry>::BoxValueIfNecessary(value));
}

winrt::RectangleGeometry ProgressBarTemplateSettingsProperties::ClipRect()
{
    return ValueHelper<winrt::RectangleGeometry>::CastOrUnbox(static_cast<ProgressBarTemplateSettings*>(this)->GetValue(s_ClipRectProperty));
}

void ProgressBarTemplateSettingsProperties::ContainerAnimationEndPosition(double value)
{
    static_cast<ProgressBarTemplateSettings*>(this)->SetValue(s_ContainerAnimationEndPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ProgressBarTemplateSettingsProperties::ContainerAnimationEndPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ProgressBarTemplateSettings*>(this)->GetValue(s_ContainerAnimationEndPositionProperty));
}

void ProgressBarTemplateSettingsProperties::ContainerAnimationEndPosition2(double value)
{
    static_cast<ProgressBarTemplateSettings*>(this)->SetValue(s_ContainerAnimationEndPosition2Property, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ProgressBarTemplateSettingsProperties::ContainerAnimationEndPosition2()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ProgressBarTemplateSettings*>(this)->GetValue(s_ContainerAnimationEndPosition2Property));
}

void ProgressBarTemplateSettingsProperties::ContainerAnimationMidPosition(double value)
{
    static_cast<ProgressBarTemplateSettings*>(this)->SetValue(s_ContainerAnimationMidPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ProgressBarTemplateSettingsProperties::ContainerAnimationMidPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ProgressBarTemplateSettings*>(this)->GetValue(s_ContainerAnimationMidPositionProperty));
}

void ProgressBarTemplateSettingsProperties::ContainerAnimationStartPosition(double value)
{
    static_cast<ProgressBarTemplateSettings*>(this)->SetValue(s_ContainerAnimationStartPositionProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ProgressBarTemplateSettingsProperties::ContainerAnimationStartPosition()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ProgressBarTemplateSettings*>(this)->GetValue(s_ContainerAnimationStartPositionProperty));
}

void ProgressBarTemplateSettingsProperties::ContainerAnimationStartPosition2(double value)
{
    static_cast<ProgressBarTemplateSettings*>(this)->SetValue(s_ContainerAnimationStartPosition2Property, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ProgressBarTemplateSettingsProperties::ContainerAnimationStartPosition2()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ProgressBarTemplateSettings*>(this)->GetValue(s_ContainerAnimationStartPosition2Property));
}

void ProgressBarTemplateSettingsProperties::IndicatorLengthDelta(double value)
{
    static_cast<ProgressBarTemplateSettings*>(this)->SetValue(s_IndicatorLengthDeltaProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double ProgressBarTemplateSettingsProperties::IndicatorLengthDelta()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<ProgressBarTemplateSettings*>(this)->GetValue(s_IndicatorLengthDeltaProperty));
}
