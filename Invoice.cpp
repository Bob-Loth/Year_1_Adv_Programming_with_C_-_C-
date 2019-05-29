#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

//CONSTRUCTORS
Invoice::Invoice() {
  partNumber = "000000";
  partDesc = "ADD PART DESC";
  partsPurchased = 0;
  partPrice = 0;
}
//provides a clean way to initialize an Invoice object with custom parameters
Invoice::Invoice(string partNumber, string partDesc, int partsPurchased, int partPrice)
{
  this->partNumber = partNumber;
  this->partDesc = partDesc;
  if (partsPurchased >= 0) {
    this->partsPurchased = partsPurchased;
  }
  else this->partsPurchased = 0;
  if (partPrice >= 0) {
    this->partPrice = partPrice;
  }
  else this->partPrice = 0;
}
//BASIC Set-Get FUNCTIONS
void Invoice::SetPartNumber(std::string partNumber) {
  this->partNumber = partNumber;
  cout << "\nPart Number successfully modified\n";
}
string Invoice::GetPartNumber() {
  return this->partNumber;
}
void Invoice::SetPartDesc(std::string partDesc) {
  this->partDesc = partDesc;
  cout << "\nDescription successfully modified\n";
}
string Invoice::GetPartDesc() {
  return this->partDesc;
}
void Invoice::SetPartsPurchased(int partsPurchased) {
  if (partsPurchased >= 0) {
    this->partsPurchased = partsPurchased;
    cout << "\nQuantity of parts purchased successfully modified\n";
  }
  else {
    this->partsPurchased = 0;
    cout << "\nQuantity cannot be negative. Quantity set to 0.\n";
  }
}
int Invoice::GetPartsPurchased() {
    return this->partsPurchased;
}
void Invoice::SetPartPrice(int partPrice) {
  if (partPrice >= 0) {
    this->partPrice = partPrice;
    cout << "\nPrice successfully modified\n";
  }
  else {
    this->partPrice = 0;
    cout << "\nprice cannot be negative. price set to 0.\n";
  }
}
int Invoice::GetPartPrice() {
  return this->partPrice;
}

//COMPLEX FUNCTIONS
int Invoice::GetInvoiceAmount() {
  return this->partPrice * this->partsPurchased;
}
void Invoice::PrintInvoice() {
  cout << endl << "Part number: " << GetPartNumber() << endl;
  cout << "Part description: " << GetPartDesc() << endl;
  cout << "Quantity: " << GetPartsPurchased() << endl;
  cout << "Price per item: $" << GetPartPrice() << endl;
  cout << "Invoice amount: $" << GetInvoiceAmount() << endl;
}