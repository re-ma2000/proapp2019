//
// MainPage.xaml.h
// MainPage クラスの宣言。
//

#pragma once

#include "MainPage.g.h"

namespace AttendanceRecord
{
	/// <summary>
	/// それ自体で使用できる空白ページまたはフレーム内に移動できる空白ページ。
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_AttendanceInput(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void DataOutput(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void AppSetting(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_Canceld(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
