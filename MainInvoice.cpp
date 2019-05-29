#include <string>
#include <iostream>
using namespace std;

//CLASSES
#include "Invoice.h"

int main() {
  Invoice blankTest;
  Invoice setByConstructor("51515", "Turtle Doves", 2, 50);
  setByConstructor.PrintInvoice();
  blankTest.SetPartDesc("Golden Rings");
  blankTest.SetPartPrice(-45);
  blankTest.SetPartsPurchased(5);
  blankTest.SetPartNumber("445566");
  blankTest.PrintInvoice();
  blankTest.SetPartPrice(250);
  blankTest.PrintInvoice();
  cin.ignore();
  return 0;
}