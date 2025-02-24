// CSC 134
// M3T3
// Fox Yarnall
// 2/17/2025

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main() {

const int SIDES = 10;
int seed = time(0);
// seed the rando number generator
srand(seed);
// rand is a larger number, so we take the remander using %
int roll;

roll = (rand() % SIDES);
cout << roll << endl;

roll = (rand() % SIDES);
cout << roll << endl;

roll = (rand() % SIDES);
cout << roll << endl;
    return 0;
}