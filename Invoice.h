
#ifndef INVOICE_H
#define INVOICE_H
#include <string>
using namespace std;

class Invoice
{
public:
  //CONSTRUCTORS
  Invoice();
  Invoice(string partNumber, string partDesc, int partsPurchased, int partPrice);

  //BASIC Set-Get FUNCTIONS
  void SetPartNumber(std::string partNumber);
  std::string GetPartNumber();
  void SetPartDesc(std::string partDesc);
  std::string GetPartDesc();
  void SetPartsPurchased(int partsPurchased);
  int GetPartsPurchased();
  void SetPartPrice(int partPrice);
  int GetPartPrice();

  //COMPLEX FUNCTIONS
  int GetInvoiceAmount();
  void PrintInvoice();
private:
  std::string partNumber;
  std::string partDesc;
  int partsPurchased;
  int partPrice;

};
#endif // !INVOICE_H
