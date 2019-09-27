//
// AttendanceInput.xaml.cpp
// AttendanceInput クラスの実装
//

#include "pch.h"
#include "AttendanceInput.xaml.h"
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

FILE *fp;

// 空白ページの項目テンプレートについては、https://go.microsoft.com/fwlink/?LinkId=234238 を参照してください

AttendanceInput::AttendanceInput()
{
	InitializeComponent();
}


void AttendanceRecord::AttendanceInput::Button_MainPage(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Frame->Navigate(MainPage::typeid);
	
}
 
