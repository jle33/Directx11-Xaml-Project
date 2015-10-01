//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace App5
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void button2_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void button5_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void catnbox_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void cat_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void fry_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void archer_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void button1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
