/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-09
Assignment 2 - conversion */

#include <iostream>
using namespace std;

void getLength(double& feet, double& inches) {
  cout << "Enter the length in feet then inches:" << endl;
  cin >> feet;
  cin >> inches;
}

void conversion(double& userFeetToMeter, double& userInchToCent) {
  double totalFeet;
  double feetToMeter;
  double totalCentimeters;
  int finalMeters;

  totalFeet = userFeetToMeter + (userInchToCent / 12);

  feetToMeter = totalFeet * .3048;
  totalCentimeters = feetToMeter * 100;
  finalMeters = feetToMeter;

  userFeetToMeter = finalMeters;
  userInchToCent = totalCentimeters - (finalMeters * 100);
}

void output(double user_meters, double user_cent) {
  cout << "The equivalent length is " << user_meters;
  cout << " meters and " << user_cent << " centimeters." << endl;
}

int main() {
  string user_choice;

  cout << "Enter any word if you would like to convert a length";
  cout << ", or type exit if you would like to quit the program: " << endl;
  cin >> user_choice;

  while (user_choice != "exit") {
    double userFeet;
    double userInches;

    getLength(userFeet, userInches);
    conversion(userFeet, userInches);
    output(userFeet, userInches);

    cout << "Type exit to quit, or enter any word to continue: ";
    cin >> user_choice;
  }

  return 0;
}
