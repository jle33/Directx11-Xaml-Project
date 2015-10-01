
#include "pch.h"
#include "gamelogic.h"
#include <stdlib.h>
#include <time.h>

using namespace Platform;
namespace mygamelogic {
	static bool matcharr[5];
	static bool userarr[5];
	String^ displayText = "";
	void gamelogic::randomize() {
		srand(time(NULL));
		for (int i = 0; i < 5; i++) {
			int rnum = rand() % 2 + 1;
			if (rnum == 1) {
				matcharr[i] = false;
			}
			else {
				matcharr[i] = true;
			}
		}

		displayText = "Click ";
		if (matcharr[0]) {
			displayText = displayText + ", " + "Cat";
		}
		if (matcharr[1]) {
			displayText = displayText + ", " + "Cat n Box";
		}
		if (matcharr[2]) {
			displayText = displayText + ", " + "Fry";
		}
		if (matcharr[3]) {
			displayText = displayText + ", " + "Archer";
		}
		if (matcharr[4]) {
			displayText = displayText + ", " + "Lizard";
		}

	}

	String^ gamelogic::getdisplayText() {
		return displayText;
	}

	bool gamelogic::check() {
		for (int i = 0; i < 5; i++) {
			if (userarr[i] != matcharr[i]) {
				return false;
			}
		}
		return true;
	}

	void gamelogic::correctbuttonpressed(int butnum) {
		userarr[butnum] = true;
		if (userarr[butnum] == matcharr[butnum]) {
			displayText = "correct";
		}
		else {
			userarr[butnum] = false;
			displayText ="Try Again!!";
		}

		if (check()) {
			displayText = "YAY! correct buttons pressed!!!";
		}
	}

	void gamelogic::getnewmatch() {
		for (int i = 0; i < 5; i++) {
			matcharr[i] = false;
			userarr[i] = false;
		}
		randomize();
	}
}