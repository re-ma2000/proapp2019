//
// DataOutput.xaml.h
// DataOutput クラスの宣言
//

#pragma once

#include "DataOutput.g.h"

namespace AttendanceRecord
{
	/// <summary>
	/// それ自体で使用できる空白ページまたはフレーム内に移動できる空白ページ。
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class DataOutput sealed
	{
	public:
		DataOutput();
	private:
		void Button_MainPage(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void 出力_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
