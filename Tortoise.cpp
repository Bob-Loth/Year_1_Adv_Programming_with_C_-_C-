#include "Tortoise.h"



Tortoise::Tortoise() {
	this->tortPosition = 1;
	this->tortRandom = (rand() % 10) + 1;
}


Tortoise::~Tortoise() {
}

int Tortoise::GetTortPosition() {
	return this->tortPosition;
}

void Tortoise::tortMove() {   //table for tort's movements
	this->tortRandom = rand() % 10 + 1;
	if (this->tortRandom >= 8) {
		this->tortPosition += 1; //30%
	}
	else if (this->tortRandom >= 6) {
		this->tortPosition -= 6; //20%
	}
	else {
		this->tortPosition += 3; //50%
	}
	//set to 1 if less than 1
	if (this->tortPosition < 1) {
		this->tortPosition = 1;
	}
}
