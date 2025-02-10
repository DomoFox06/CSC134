// M2Lab1
// CSC 134
// Domonic Yarnall
// 2/10/2025

#include <iostream>
#include <iomanip>
using namespace std;
// getting volume and dimentions
int main() {
    cout << "Crate Calculation Program" << endl;
int length, width, hieght;
int volume;

cout <<"Enter the dimentions of the crate." << endl;
cout << "Length: ";
cin >> length;
cout << "Width: ";
cin >> width;
cout << "Hieght: ";
cin >> hieght;


volume = length * width * hieght;

cout << "A crate " << length << " by " << width << " by " << hieght << endl;
cout << "Is volume " << volume << endl;

// getting cost
const double COST_PER = 0.23;
const double CHARGE_PER = 0.50;
double cost, charge, profit;

cost = volume * 0.23;
charge = CHARGE_PER * volume;
profit = charge - cost;

cout << setprecision (2) << fixed << showpoint << endl;
cout << "It costs: $" << cost << " to make." << endl;
cout << "Sells for: $" << charge << endl;
cout << "Profit is: $" << profit << endl;


    return 0;
}