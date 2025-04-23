/*
Domonic Yarnall
CSC 134
4/23/25
Final Project
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//The dice rolling random number
int rollDice() {
    return (rand() % 10 + 1);
}
int main(){

    srand(time(0)); //Random number generator

    bool go = true;
    int choice;

        int total;
        char r;
        int roll = rollDice();

        cout << "Roll the die!" << endl;
        cout << "Push r to roll " ;
        cin >> r;
        cout << "Your roll is: " << roll << "!" ;
        for (int i =0; i < roll; i++){
            string die = "🎲";
            cout << die;
        }
        
        
       




    return 0;
}