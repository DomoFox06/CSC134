// CSC 134
// Domonic Yarnall
//M3Bonus Assignment
// 3/3/2025

// The code that Copilot came up with

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to roll two dice
int rollDice() {
    return (rand() % 6 + 1) + (rand() % 6 + 1);
}

int main() {
    srand(time(0)); // Seed the random number generator

    cout << "Welcome to the Craps game!\n";
    int roll = rollDice();
    cout << "You rolled: " << roll << endl;

    if (roll == 7 || roll == 11) {
        cout << "You win!\n";
    } else if (roll == 2 || roll == 3 || roll == 12) {
        cout << "You lose!\n";
    } else {
        int point = roll;
        cout << "Your point is: " << point << endl;

        while (true) {
            roll = rollDice();
            cout << "You rolled: " << roll << endl;

            if (roll == point) {
                cout << "You win!\n";
                break;
            } else if (roll == 7) {
                cout << "You lose!\n";
                break;
            }
        }
    }

    return 0;
}