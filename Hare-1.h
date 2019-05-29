#ifndef HARE
#define HARE
using namespace std;
//C++
#include <iostream>
#include <iomanip>
//C
#include <cstdlib>
class Hare
{
public:
	Hare();
	~Hare();
	int GetHarePosition();
	void hareMove();
private:
	int harePosition;
	int hareRandom;
};

#endif