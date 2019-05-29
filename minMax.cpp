#include <iostream>
using namespace std;
double minimum(double arrayOfNums[3]) {
	double min = arrayOfNums[0];
	for (int i = 0; i < 3; i++){
		if (min > arrayOfNums[i]) {
			min = arrayOfNums[i];
		}
	}
	return min;
}
double maximum(double arrayOfNums[3]) {
	double max = arrayOfNums[0];
	for (int i = 0; i < 3; i++) {
		if (max < arrayOfNums[i]) {
			max = arrayOfNums[i];
		}
	}
	return max;
}

int main() {
	double myThreeNumbers[3];
	bool isNumber = false;

	//get and validate first number
	while (!isNumber)
	{

		cout << "Enter the first number: ";
		cin >> myThreeNumbers[0];
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, 10);
			cout << "\nPlease enter a number.\n";
		}
		else {
			cin.ignore(1000, 10);
			isNumber = true;
		}
	}

	//get and validate second number
	isNumber = false;
	while (!isNumber)
	{

		cout << "Enter the second number: ";
		cin >> myThreeNumbers[1];
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, 10);
			cout << "\nPlease enter a number.\n";
		}
		else {
			cin.ignore(1000, 10);
			isNumber = true;
		}
	}
	//get and validate third number
	isNumber = false;
	while (!isNumber)
	{

		cout << "Enter the third number: ";
		cin >> myThreeNumbers[2];
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, 10);
			cout << "\nPlease enter a number.\n";
		}
		else {
			cin.ignore(1000, 10);
			isNumber = true;
		}
	}

	//input numbers into minimum and maximum function, display results

	cout << "The smallest number you entered was " << minimum(myThreeNumbers) << "." << endl;
	cout << "The largest number you entered was " << maximum(myThreeNumbers) << "." << endl;

	
}