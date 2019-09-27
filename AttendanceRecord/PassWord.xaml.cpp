//
// PassWord.xaml.cpp
// PassWord クラスの実装
//

#include "pch.h"
#include "PassWord.xaml.h"
#include "MainPage.xaml.h"

using namespace AttendanceRecord;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// 空白ページの項目テンプレートについては、https://go.microsoft.com/fwlink/?LinkId=234238 を参照してください

PassWord::PassWord()
{
	InitializeComponent();
}

void AttendanceRecord::PassWord::passwordBox_PasswordChanged(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

}

void AttendanceRecord::PassWord::password_check(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	if (password->Password == "password") {
		statusText->Text = "password is not allowed as a password.";
		Frame->Navigate(MainPage::typeid);
	}
	else {
		statusText->Text = "This password is not ";
	}

}


void AttendanceRecord::PassWord::button_click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Frame->Navigate(MainPage::typeid);

}