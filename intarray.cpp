/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-09
Assignment 2 - intarray */

#include <iostream>
#include <vector>
using namespace std;

int main() {

  int NUM_VALS = 10;
  vector<int> numArray(NUM_VALS);
  int current_Num;
  int i = 0;

  while (i != 10) {
    cout << "Please enter a positive integer: ";
    cin >> current_Num;
    if (current_Num >= 0) {
      numArray.at(i) = current_Num;
      ++i;
    }
  }

  for (i = 0; i < numArray.size(); i++) {
    cout << "Number " << i + 1 << ": " << numArray.at(i) << endl;
  }

  return 0;
}
