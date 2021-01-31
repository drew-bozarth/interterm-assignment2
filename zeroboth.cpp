/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-09
Assignment 2 - zeroboth */

#include <iostream>
using namespace std;

void zeroboth(int& val_1, int& val_2) { //function with 2 int passby values
  val_1 = 0; //sets first val to 0
  val_2 = 0; //sets second val to 0
}

int main() { //main part of program
  int user_val_1; //creates int variable
  int user_val_2; //same as above

  cout << "Please enter two values:" << endl; //prompts user for values
  cin >> user_val_1; //input values into variables
  cin >> user_val_2; //same as above

  zeroboth(user_val_1, user_val_2); //puts both user values through the zeroboth function

  cout << "Now the values are "; //final message
  cout << user_val_1 << " and " << user_val_2 << endl; //prints both results

  return 0;
}
