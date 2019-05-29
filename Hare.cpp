#include "Hare.h"

Hare::Hare() {
	this->harePosition = 1;
	this->hareRandom = rand() % 10 + 1;
}

Hare::~Hare() {
}

int Hare::GetHarePosition() {
	return this->harePosition;
}

void Hare::hareMove() {   //table for hare's movements
	this->hareRandom = rand() % 10 + 1;
	if (this->hareRandom >= 9){
		this->harePosition -= 2; //20%
	}
	else if (this->hareRandom >= 6) {
		this->harePosition += 1; //30%
	}
	else if (this->hareRandom >= 5) {
		this->harePosition -= 12; //10%
	}
	else if (this->hareRandom >= 3) {
		this->harePosition += 9; //20%
	}
	else {} //20%

	//set to 1 if less than 1
	if (this->harePosition < 1) {
		this->harePosition = 1;
	}
}
