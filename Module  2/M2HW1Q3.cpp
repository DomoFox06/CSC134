// M2HW1Q3
// CSC 134
// Domonic Yarnall
// 2/10/2025
//Gold
#include <iostream>
#include <iomanip>
using namespace std;
// getting volume and dimentions
int main() {

int people, pizza, slices, slicesLeft, totalSlices, dividedSlices;

cout << "Amount of people: " << endl;
cin >> people;
cout << "Amount of pizzas: " << endl;
cin >> pizza;
slices = 8;

totalSlices = pizza * slices;

dividedSlices = totalSlices / people;
slicesLeft = totalSlices - dividedSlices;

cout << "Slices left over: " << slicesLeft << endl;

    return 0;
}