#include <iostream>
using namespace std;

//FUNCTIONS
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
  //DATA
  double myThreeNumbers[3]; //array of 3 user-supplied doubles
  bool isNumber = false;    //checks for failed input into double data type

  for (int i = 0; i < 3; i++)
  {
    //get and validate 3 numbers, input into myThreeNumbers array
    isNumber = false;
    while (!isNumber)
    {
      if (i == 0)      cout << "Enter the first number: ";
      else if (i == 1) cout << "Enter the second number: ";
      else             cout << "Enter the third number: ";
      cin >> myThreeNumbers[i];
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
  }

  //input numbers into minimum and maximum function, display results
  cout << "The smallest number you entered was " << minimum(myThreeNumbers) << "." << endl;
  cout << "The largest number you entered was " << maximum(myThreeNumbers) << "." << endl;
}