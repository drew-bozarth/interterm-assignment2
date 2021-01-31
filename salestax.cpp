/* Drew Bozarth
2373658
dbozarth@chapman.edu
CPSC 298-09
Assignment 2 - salestax */

#include <iostream>
using namespace std;

double addTax(double taxRate, double cost) {
    double total;

    total = cost + (cost * (taxRate / 100));

    return total;
}

int main() {

  double user_Tax_Rate;
  double user_Cost;
  double total_price;

  cout << "Please enter the price of the item: ";
  cin >> user_Cost;
  cout << "Please enter the tax rate as a percentage: ";
  cin >> user_Tax_Rate;

  total_price = addTax(user_Tax_Rate, user_Cost);

  cout << "The $" << user_Cost << " item with a " << user_Tax_Rate;
  cout << "% tax rate totals to: $" << total_price << endl;

  return 0;
}
