//
// AppSetting.xaml.h
// AppSetting クラスの宣言
//

#pragma once

#include "AppSetting.g.h"

namespace AttendanceRecord
{
	/// <summary>
	/// それ自体で使用できる空白ページまたはフレーム内に移動できる空白ページ。
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class AppSetting sealed
	{
	public:
		AppSetting();
	private:
		void Button_MainPage(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
