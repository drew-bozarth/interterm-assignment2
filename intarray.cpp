/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-09
Assignment 2 - intarray */

#include <iostream>
#include <vector>
using namespace std;

int main() { //main part of program

  int NUM_VALS = 10; //sets the number of values wanted in array
  vector<int> numArray(NUM_VALS); //creates a vector with 10 slots
  int current_Num; //sets int variable
  int i = 0; //sets up i which is our iteration variable

  while (i != 10) { //loop runs while i isnt 10
    cout << "Please enter a positive integer: "; //prompts for a positive num
    cin >> current_Num; //gets user input
    if (current_Num >= 0) { //if branch executes if the number entered is positive
      numArray.at(i) = current_Num; //assigns the current iteration in the vector with the current enter num
      ++i; //increments i
    }
  }

  for (i = 0; i < numArray.size(); i++) { //loop runs all the way through the vector
    cout << "Number " << i + 1 << ": " << numArray.at(i) << endl; //output printing each place of the user's numbers with their numbers
  }

  return 0;
}
