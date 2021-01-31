/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-09
Assignment 2 - zeroboth */

#include <iostream>
using namespace std;

void zeroboth(int& val_1, int& val_2) {
  val_1 = 0;
  val_2 = 0;
}

int main() {
  int user_val_1;
  int user_val_2;

  cout << "Please enter two values:" << endl;
  cin >> user_val_1;
  cin >> user_val_2;

  zeroboth(user_val_1, user_val_2);

  cout << "Now the values are ";
  cout << user_val_1 << " and " << user_val_2 << endl;

  return 0;
}
