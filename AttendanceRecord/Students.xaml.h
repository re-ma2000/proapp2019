//
// Students.xaml.h
// Students クラスの宣言
//

#pragma once

#include "Students.g.h"

namespace AttendanceRecord
{
	/// <summary>
	/// それ自体で使用できる空白ページまたはフレーム内に移動できる空白ページ。
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Students sealed
	{
	public:
		Students();
	private:
		void Button_MainPage(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
