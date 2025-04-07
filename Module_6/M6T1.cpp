/*
Domonic Yarnall
CSC-134
M6T1
4/7/25
*/

#include <iostream>
using namespace std;

int main(){

const int DAYS = 5;
int cars_today;
int cars_total = 0;
double car_average;
int cars[DAYS];

cout << "Enter cars that pass for the day." << endl;
for (int i=0; i<DAYS; i++){
    cout << "Day " << i+1 << ": ";
    cin >> cars_today;
    cars[i] = cars_today;
    cars_total += cars_today;
}
cout << "Over " << DAYS << " days, total cars = " << cars_total << endl;
car_average = (double) cars_total / DAYS;
cout << "Average amount of cars is " << car_average << endl;

for (int i = 0; i<DAYS; i++){
    cout << "Day: " << i+1 << " Count: " << cars[i] << endl;
}


    return 0;
}