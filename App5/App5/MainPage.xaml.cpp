//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include "gamelogic.h"

using namespace App5;

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
using namespace Windows::UI::Xaml::Media::Imaging;
using namespace mygamelogic;
// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}

void App5::MainPage::catnbox_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	gamelogic::correctbuttonpressed(1);
	imageBox->Source = ref new BitmapImage(ref new Windows::Foundation::Uri("ms-appx:///Assets/cat-box-21.jpg"));
	String^ result = gamelogic::getdisplayText();
	textBox1->Text = result;
}


void App5::MainPage::cat_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	gamelogic::correctbuttonpressed(0);
	imageBox->Source = ref new BitmapImage(ref new Windows::Foundation::Uri("ms-appx:///Assets/enhanced-7571-1408440765-30.jpg"));
	String^ result = gamelogic::getdisplayText();
	textBox1->Text = result;
}


void App5::MainPage::fry_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	gamelogic::correctbuttonpressed(2);
	imageBox->Source = ref new BitmapImage(ref new Windows::Foundation::Uri("ms-appx:///Assets/Futurama_106_-_A_Fishful_of_Dollars.jpg"));
	String^ result = gamelogic::getdisplayText();
	textBox1->Text = result;
}


void App5::MainPage::archer_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	gamelogic::correctbuttonpressed(3);
	imageBox->Source = ref new BitmapImage(ref new Windows::Foundation::Uri("ms-appx:///Assets/archerdownload.png"));
	String^ result = gamelogic::getdisplayText();
	textBox1->Text = result;
}

void App5::MainPage::button5_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	gamelogic::correctbuttonpressed(4);
	imageBox->Source = ref new BitmapImage(ref new Windows::Foundation::Uri("ms-appx:///Assets/dinosaur-meme-trex-hates-pushups-lol-funny-pictures.jpg"));
	String^ result = gamelogic::getdisplayText();
	textBox1->Text = result;
}


void App5::MainPage::button1_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{ 
	 
	gamelogic::getnewmatch();
	String^ result = gamelogic::getdisplayText();
	textBox1->Text = result;
	startbtn->Content = "Play Again";
}
