#include "Hare.h"
#include "Tortoise.h"
using namespace std;
//C++
#include <iostream>
#include <iomanip>
//C
#include <cstdlib>

//main functions
void printPos(Hare* BugsPtr, Tortoise* DonatelloPtr);

int main() {
	Hare* BugsPtr = new Hare;
	Tortoise* DonatelloPtr = new Tortoise;
	while (DonatelloPtr->GetTortPosition() < 70 && BugsPtr->GetHarePosition() < 70) {
		printPos(BugsPtr, DonatelloPtr);
	}
	if (DonatelloPtr->GetTortPosition() > BugsPtr->GetHarePosition()) {
		cout << "TORTOISE  WINS!!!  YAY!!!" << endl;
	}
	else if (DonatelloPtr->GetTortPosition() < BugsPtr->GetHarePosition()) {
		cout << "Hare  wins.  Yuch." << endl;
	}
	else {
		cout << "It's a tie!" << endl;
	}
	cin.ignore();
	return 0;
}

void printPos(Hare* BugsPtr, Tortoise* DonatelloPtr) {
		BugsPtr->hareMove();
		DonatelloPtr->tortMove();

		if (BugsPtr->GetHarePosition() == DonatelloPtr->GetTortPosition()) { //even
			cout << setw(BugsPtr->GetHarePosition() + 6) << right << "OUCH!!!" << endl; // 6 so that O starts where T/H would
		}
		else if (BugsPtr->GetHarePosition() > DonatelloPtr->GetTortPosition()) { //hare ahead
			cout << setw(DonatelloPtr->GetTortPosition()) << right << "T" << setw(BugsPtr->GetHarePosition() - DonatelloPtr->GetTortPosition()) << "H" << endl;
		}
		else { //tortoise ahead
			cout << setw(BugsPtr->GetHarePosition()) << right << "H" << setw(DonatelloPtr->GetTortPosition() - BugsPtr->GetHarePosition()) << "T" << endl;
		}
}
