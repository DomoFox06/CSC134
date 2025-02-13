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

int people, pizza, slices, slicesLeft, totalSlices, slicesPerperson;

cout << "Amount of people: " << endl;
cin >> people;
cout << "Amount of boxes of pizzas: " << endl;
cin >> pizza;
cout << "Slices Per Pizza: "<< endl;
cin >> slices;

totalSlices = pizza * slices;

slicesPerperson = 3 * people;
slicesLeft = totalSlices - slicesPerperson;

cout << "Slices left over: " << slicesLeft << endl;

    return 0;
}