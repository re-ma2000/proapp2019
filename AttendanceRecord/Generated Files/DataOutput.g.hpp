﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "DataOutput.xaml.h"

void ::AttendanceRecord::DataOutput::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///DataOutput.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::AttendanceRecord::DataOutput::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 2:
        {
            ::Windows::UI::Xaml::Controls::Button^ element2 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element2))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::AttendanceRecord::DataOutput::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DataOutput::Button_MainPage);
        }
        break;
    case 3:
        {
            this->contentPanel = safe_cast<::Windows::UI::Xaml::Controls::StackPanel^>(__target);
        }
        break;
    case 4:
        {
            this->出力 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->出力))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::AttendanceRecord::DataOutput::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DataOutput::出力_Click);
        }
        break;
    case 5:
        {
            this->EndDay = safe_cast<::Windows::UI::Xaml::Controls::DatePicker^>(__target);
        }
        break;
    case 6:
        {
            this->StartDay = safe_cast<::Windows::UI::Xaml::Controls::DatePicker^>(__target);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::AttendanceRecord::DataOutput::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

#pragma warning(pop)


