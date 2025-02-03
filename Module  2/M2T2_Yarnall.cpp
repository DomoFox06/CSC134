// CSC 134
// M2T2
// Fox Yarnall
// 2/3/2025
// Simples sales program thst prints well formated receipts

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
// set up the variable
double food_price = 5.99;
string store_name = "Sandy Wich";
string food_item = "Sandwhich";
double tax_cost = 0.08;
// Doing the order
cout << "Welcome to the " << store_name << endl;
cout << "You have a " << food_item << " that comes out to $" << food_price << endl;

// Figure out subtotal and total
double subtotal = food_price * tax_cost;
double total = subtotal + food_price;
cout << fixed << setprecision (2);

cout << "YOUR RECIEPT" << endl;
cout << "------------" << endl;
cout << "Subtotal: $" << food_price << endl;
cout << "Tax: $" << subtotal << endl;
cout << "------------" << endl;
cout << "Total: $" << total << endl;
cout << "Have a nice day!" << endl;

cout << endl;
return 0;
}