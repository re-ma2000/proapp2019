﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class PasswordBox;
                ref class TextBlock;
                ref class Button;
            }
        }
    }
}

namespace AttendanceRecord
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class Pass : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        void UnloadObject(::Windows::UI::Xaml::DependencyObject^ dependencyObject);
        void DisconnectUnloadedObject(int connectionId);
    
    private:
        bool _contentLoaded;
    
        class Pass_obj1_Bindings;
    
        private: ::Windows::UI::Xaml::Controls::PasswordBox^ password;
        private: ::Windows::UI::Xaml::Controls::TextBlock^ statusText;
        private: ::Windows::UI::Xaml::Controls::Button^ login_button;
    };
}

