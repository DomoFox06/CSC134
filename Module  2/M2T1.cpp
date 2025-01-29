// CSC 134
// M1LAB
// Fox Yarnall
// 1/29/2025
// Adding to it today

#include <iostream>
using namespace std;
int main() {
// This program will simulate an apple orchard.
// The owner’s name
string name = "Fox ";
// number of apples owned
int num_apples = 100;
// price per apple
double cost_each = 0.25;
// M2T1 variables
string user_name;
int apples_to_buy;

// Greet customer
cout << "Hiya! What might your name be?";
cin >> user_name;
cout << "Thanks for coming by, " << user_name << "!"  << endl;


cout << " Welcome to the" << name << " apple farm!" << endl;
cout << " There are" << num_apples << "apples in stock." << endl;
cout << "They cost $" << cost_each << "each." << endl;

double total_cost = num_apples * cost_each;
cout << "The price for all of them is: $" << total_cost << endl;

cout << endl;
return 0;
}