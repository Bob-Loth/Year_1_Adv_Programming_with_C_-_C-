// Programmer: Robert Loth
// Programmer's ID: 1684749
//Course: COMSC-165
//Compiler: TDM MinGW
//Editor: VS Code

//libraries
#include <iostream>
#include <vector>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE


int main()
{
  //Data
  const int PLAYER_SIZE = 12;
  vector<double> playerWeights(PLAYER_SIZE);
  double totalWeight=0;
  double maxWeight=0;
  // programmer's identification
  cout << "Programmer: First Last\n";
  cout << "Programmer's ID: 1684749\n";
  cout << "File: " << __FILE__ << endl;
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  for (int i=0; i < PLAYER_SIZE; i++){
      cout << "Enter weight " << i+1 << ": ";
      cin >> playerWeights.at(i);
      cin.ignore(1000,10);
  }//fill out 12 weights

  cout << "You entered: ";

  for (int i=0; i < PLAYER_SIZE; i++){
      cout << playerWeights.at(i) << " ";
  }//output all PLAYER_SIZE playerWeights

  maxWeight = playerWeights.front();
  for (int i=0; i < PLAYER_SIZE; i++){
      totalWeight += playerWeights.at(i);//find total weight
      if (playerWeights.at(i) > maxWeight){
          maxWeight = playerWeights.at(i);
      }//find maximum weight
  }//for

  cout << "\n\nTotal weight: "  << totalWeight << endl;
  cout << "Average weight: " << totalWeight / PLAYER_SIZE << endl;
  cout << "Max weight: " << maxWeight << endl;
  cin.ignore();
}//main