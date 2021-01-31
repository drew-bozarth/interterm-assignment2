/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-09
Assignment 2 - salestax */

#include <iostream>
using namespace std;

double addTax(double taxRate, double cost) { //function to add tax
    double total; //create floating variable

    total = cost + (cost * (taxRate / 100)); //the total is the cost plus
// the tax rate put into a decimal multiplied by the item price
    return total; //funcion returns a double which is the total
}

int main() { //main part of function

  double user_Tax_Rate; //floating variable for tax rate
  double user_Cost; //floating var for cost of item
  double total_price; //floating var for end price

  cout << "Please enter the price of the item: "; //prompt message
  cin >> user_Cost; //input goes into this variable
  cout << "Please enter the tax rate as a percentage: "; //prompt for tax rate
  cin >> user_Tax_Rate; //tax variable

  total_price = addTax(user_Tax_Rate, user_Cost); //puts user tax and price values through the function

  cout << "The $" << user_Cost << " item with a " << user_Tax_Rate; //final message outputs totals
  cout << "% tax rate totals to: $" << total_price << endl;

  return 0;
}
