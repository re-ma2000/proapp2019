//
// MainPage.xaml.cpp
// MainPage クラスの実装。
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "Students.xaml.h"
#include "AttendanceInput.xaml.h"
#include "DataOutput.xaml.h"
#include "AppSetting.xaml.h"
#include "Canceled.xaml.h"
#include "PassWord.xaml.h"

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

// 空白ページの項目テンプレートについては、https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x411 を参照してください

MainPage::MainPage()
{
	InitializeComponent();
}


void AttendanceRecord::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Frame->Navigate(Students::typeid);
}

void AttendanceRecord::MainPage::Button_AttendanceInput(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Frame->Navigate(AttendanceInput::typeid);
}

void AttendanceRecord::MainPage::DataOutput(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Frame->Navigate(DataOutput::typeid);
}


void AttendanceRecord::MainPage::AppSetting(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Frame->Navigate(AppSetting::typeid);
}


void AttendanceRecord::MainPage::Button_Canceld(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Frame->Navigate(Canceled::typeid);
}
