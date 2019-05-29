#ifndef TORTOISE
#define TORTOISE
using namespace std;
//C++
#include <iostream>
#include <iomanip>
//C
#include <cstdlib>

class Tortoise
{
public:
	Tortoise();
	~Tortoise();
	int GetTortPosition();
	void tortMove();
private:
	int tortPosition;
	int tortRandom;
};

#endif