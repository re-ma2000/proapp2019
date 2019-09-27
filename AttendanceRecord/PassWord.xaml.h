//
// PassWord.xaml.h
// PassWord クラスの宣言
//

#pragma once

#include "PassWord.g.h"

namespace AttendanceRecord
{
	/// <summary>
	/// それ自体で使用できる空白ページまたはフレーム内に移動できる空白ページ。
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class PassWord sealed
	{
	public:
		PassWord();

	private:
		void passwordBox_PasswordChanged(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void password_check(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Enter_press(Platform::Object^ sender, Windows::UI::Xaml::Input::KeyRoutedEventArgs^ e);
		void button_click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
