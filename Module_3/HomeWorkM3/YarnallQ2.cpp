// CSC 134
// Domonic Yarnall
//HWM3Q2
// 2/26/2025

#include <iostream>
using namespace std;

#include <iomanip>
using namespace std;
int main() {
// set up the variable
double food_price;
string store_name = "Sandy Wich";
string food_item = "Sandwhich";
string dining;
double tax_cost = 0.08;
// Doing the order
cout << "Welcome to the " << store_name << endl;
cout << "You have a " << food_item << endl;
cout << "Please enter the price of the " << food_item << endl;
cin >> food_price;
cout << food_item << "costs $" << food_price << endl;

cout << endl;
cout << "Will you be dining in with us today?" << endl;
cout << "Enter yes or no" << endl;
cin >> dining;

// Figure out subtotal and total
double subtotal = food_price * tax_cost;
double total = subtotal + food_price;
cout << fixed << setprecision (2);

cout << "           " << endl;
cout << "YOUR RECIEPT" << endl;
cout << "------------" << endl;
cout << "Subtotal: $" << food_price << endl;
cout << "Tax:      $" << subtotal << endl;
cout << "------------" << endl;
cout << "Total:    $" << total << endl;
cout << "           " << endl;
cout << "Have a nice day!" << endl;

cout << endl;
return 0;
}