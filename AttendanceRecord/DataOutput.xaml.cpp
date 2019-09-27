//
// DataOutput.xaml.cpp
// DataOutput クラスの実装
//

#include "pch.h"
#include "DataOutput.xaml.h"
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
char fname[50];
FILE* fp1;


DataOutput::DataOutput()
{
	InitializeComponent();
}


void AttendanceRecord::DataOutput::Button_MainPage(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	Frame->Navigate(MainPage::typeid);
}


void AttendanceRecord::DataOutput::出力_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//sprintf(fname,"指定ファイル.csv");
	
	Frame->Navigate(MainPage::typeid);
	
}
