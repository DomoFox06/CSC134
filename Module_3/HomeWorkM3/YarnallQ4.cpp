// CSC 134
// Domonic Yarnall
//HWM3Q4
// 3/3/2025

#include <iostream>
using namespace std;

#include <cmath>    
// for making it truly random
#include <ctime>
int main() {
    cout << "Let's do some math!" << endl;
    int seed = time(0);
    //cout << "Your seed is: " << seed << endl;
    //cout << "What's your lucky number? ";
    //cin >> seed;
    // Seed the RNG
    srand(seed);

    const int MAX = 100000; // numbers from 1-6
    int num1, num2, total;
    num1  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    
    num2  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    

    total = num1 + num2;
    cout << num1 << " + " << num2 << " = ";
   cin >> total;

if (num1 + num2 == total){
    cout << "Correct!" << endl;
}
else {
    cout << "Incorrect!" << endl;
}

return 0;
}