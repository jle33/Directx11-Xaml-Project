#pragma once
#include <iostream>
using namespace Platform;
using namespace std;

namespace mygamelogic {
	class	gamelogic {
	private:
		static void randomize();
		static bool check();
	public:
		static void correctbuttonpressed(int butnum);
		static String^ getdisplayText();
		static void getnewmatch();
	};
}