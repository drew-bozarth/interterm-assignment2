/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-09
Assignment 2 - conversion */

#include <iostream>
using namespace std;

void getLength(double& feet, double& inches) { //function the get user input
  cout << "Enter the length in feet then inches:" << endl; //message for user
  cin >> feet; //input into passby value
  cin >> inches; //same as above
}

void conversion(double& userFeetToMeter, double& userInchToCent) { //function to convert feet&inches to meters&centimeters
  double totalFeet; //variables created
  double feetToMeter;
  double totalCentimeters;
  int finalMeters; //note finalMeters is an int instead of double

  totalFeet = userFeetToMeter + (userInchToCent / 12); //inches added to make total feet

  feetToMeter = totalFeet * .3048; //feet converted to meters
  totalCentimeters = feetToMeter * 100; //meters converted to centimeters
  finalMeters = feetToMeter; //this assigns an int variable with a double value which gets rid of the decimal
//so now final meters is the interger of the meters
  userFeetToMeter = finalMeters; //passby value given back the integer of the meters
  userInchToCent = totalCentimeters - (finalMeters * 100); // the passby value for centimeters
  //is given back the total centimeters - the meters * 100, so just the left over centimeters, so value is always under 100
}

void output(double user_meters, double user_cent) { //function for output
  cout << "The equivalent length is " << user_meters; //writes out the meters
  cout << " meters and " << user_cent << " centimeters." << endl; //writes out centimeters
}

int main() { //main function
  string user_choice; //creates variable for the user to type in

  cout << "Enter any word if you would like to convert a length"; //prompts user to enter any word to use the program
  cout << ", or type exit if you would like to quit the program: " << endl; //note: user can also type exit to quit the program
  cin >> user_choice; //get input

  while (user_choice != "exit") { //function loops as long as user doesnt input "exit"
    double userFeet; //variable initially called userFeet
    double userInches; //variable initiall called userInches

    getLength(userFeet, userInches); //puts variables through input function to assign them to user's input
    conversion(userFeet, userInches); //puts them through conversion function to convert them to meters and centimeters
    output(userFeet, userInches); //puts them through output function to print out results

    cout << "Type exit to quit, or enter any word to continue: "; //asks for user's choice again
    cin >> user_choice; //user can test other values or quit
  }

  return 0;
}
