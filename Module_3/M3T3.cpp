// CSC 134
// M3T3
// Fox Yarnall
// 2/24/2025

#include <iostream>
// for pseudo-random numbers
#include <cmath>    
// for making it truly random
#include <ctime>
using namespace std;

int main() {
    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    //cout << "Your seed is: " << seed << endl;
    //cout << "What's your lucky number? ";
    //cin >> seed;
    // Seed the RNG
    srand(seed);

    const int MAX = 6; // numbers from 1-6
    int roll1, roll2, total;
    roll1  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll1 << endl;

    roll2  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;

    const int SNAKE_EYES = 2;
    const int THREE_LOSE = 3;
    const int BOX_CARS = 12;
    const int LUCKY_SEVEN = 7;
    const int LUCKY_ELEVEN = 11;

    // Let's play craps!
    // 7 and 11 - win!
    // 2 and 12 - lose.
    // anything else -- comes later.
    if (total == LUCKY_SEVEN) {
        cout << "Lucky seven! You win!" << endl;
    }
    else if (total == LUCKY_ELEVEN) {
        cout << "Eleven is a winner!" << endl;
    }
    else if (total == SNAKE_EYES) {
        cout << "Snake eyes! Too bad, you lose." << endl;
    }
    else if (total == THREE_LOSE) {
        cout << "Sorry, three is unlucky, you lose." << endl;
    }
    else if (total == BOX_CARS) {
        cout << "Boxcars! Sorry, you lost." << endl;
    }
    else {
        // anything else
        cout << "Your point is " << total << " but we'll do that part later" << endl;
    }
return 0;
}