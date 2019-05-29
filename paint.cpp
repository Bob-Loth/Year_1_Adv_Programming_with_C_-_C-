//Objective:  template for C++ programs and to test code
//Name: Robert Loth
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream> //using cin and cout
using namespace std;
#include <cmath>  //using ceil
#include <cstdlib>// using atof
#include <string> //using string buffered input
//Programmer defined data types
//NONE ch 13

//Special compiler dependent definitions
//NONE ch 7/8

//global constants/variables
//NONE ch 13

//Programmer defined functions
void introduction(string obj); //outputs information about the program: editor/compiler used, file name, objective, and time and date compiled.

//main program
int main()
{
  //Data
  double wallHeight = 0.0; // Height of wall to be painted, UNITS = feet
  double wallWidth = 0.0;  // Width of wall to be painted, UNITS = feet
  double wallArea = 0.0;   // Area of wall to be painted, UNITS = feet squared
  double paintNeeded;      // paint needed to paint the area of wallArea, expressed in gallons to 6 decimal places
  int cansNeeded;          // Cans of paint needed. Will always be = paintNeeded rounded up to the nearest gallon.
  string buf;              // buffer used to check if a valid number is entered
  string objective;        // objective of the program: what does it do?
  // output my name and objective and program information
  objective = "calculate area of a given wall, and determine the amount of paint to be used.";
  introduction(objective);

  //prompt the user to input height and width
  do{
    cout << "Please enter the height of the wall you intend to paint, in decimal feet: ";
    cin >> buf;
    cin.ignore(1000,10);
    wallHeight = atof(buf.c_str());
  }while (wallHeight <= 0); //while height valid
  
  cout << "Wall height = " << wallHeight << endl;

  do{
    cout << "Please enter the width of the wall you intend to paint, in decimal feet: ";
    cin >> buf;
    cin.ignore(1000,10);
    wallWidth = atof(buf.c_str());
  }while (wallWidth <= 0); //while width valid
  cout << "wall width = " << wallWidth << endl;

  //Calculate and output the area of the wall
  wallArea = wallHeight * wallWidth;
  cout << "The the area of the wall is " << wallArea << " square feet." << endl;

  //Calculate the amount of gallons of paint needed, to 6 decimal places. 1 gallon is 350 ft sq.
  paintNeeded = wallArea / 350;
  cout << "The wall will need "<< paintNeeded << " gallons of paint." << endl;
  cansNeeded = ceil(paintNeeded);
  cout << "This will require " << cansNeeded << " cans of paint." << endl;
  cin.ignore(); /*This statement leaves the window up until the enter key is pressed. 
  Some programs will exit once all calculations are completed, leaving no time to view the results.
  This statement ensures the user will have adequate time to record the results, no matter what they use to run it. */
}//main

void introduction(string obj)
{
  cout << "Objective: "; 
  cout << obj << endl;
  cout << "Programmer: Robert Loth\n"; 
  cout << "Editor(s) used: Notepad & VS Code\n"; 
  cout << "Compiler(s) used: TDM MinGW & Powershell\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Compiled: " << __DATE__ << " at " << __TIME__ << endl << endl; 
}