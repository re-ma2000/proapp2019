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

#include "PassWord.xaml.h"

void ::AttendanceRecord::PassWord::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///PassWord.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::AttendanceRecord::PassWord::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 2:
        {
            this->password = safe_cast<::Windows::UI::Xaml::Controls::PasswordBox^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::PasswordBox^>(this->password))->PasswordChanged += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::AttendanceRecord::PassWord::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&PassWord::passwordBox_PasswordChanged);
        }
        break;
    case 3:
        {
            this->statusText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
        }
        break;
    case 4:
        {
            this->login_button = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->login_button))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::AttendanceRecord::PassWord::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&PassWord::password_check);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::AttendanceRecord::PassWord::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

#pragma warning(pop)


