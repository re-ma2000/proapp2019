//
// Canceled.xaml.h
// Canceled クラスの宣言
//

#pragma once

#include "Canceled.g.h"

namespace AttendanceRecord
{
	/// <summary>
	/// それ自体で使用できる空白ページまたはフレーム内に移動できる空白ページ。
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Canceled sealed
	{
	public:
		Canceled();
	private:
		void button_MainPage(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void click_hokou(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
