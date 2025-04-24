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

void Start();
void Charecter();
void Name();
//The dice rolling random number
int rollDice() {
    return (rand() % 10 + 1);
}
int main(){

    srand(time(0)); //Random number generator

    Start();
    
        int total;
        char roll_choice;
        char R_C = 'r';
        int roll = rollDice();

        cout << "Roll the die!" << endl;
        do{
        cout << "Push r to roll " ;
        cin >> roll_choice;
        } while (roll_choice != R_C);
        cout << "Your roll is: " << roll << "!" ;
        for (int i =0; i < roll; i++){
            string die = "🎲";
            cout << die;
        }
        
        
       




    return 0;
}
 void Start(){
    cout << "Hello there! I am glad you chose to play this two player game!" << endl ;
    char s = 's';
    char choice;
    do{
     cout << "Please input s to start the game and choose your avatar: " ;
    cin >> choice;
    } while (s != s); 
    if (s = s){
        void Charectar();
    }
}
void Charecter(){
cout << "Time to choose your charecter!" << endl;
int p1, p1a, p2, p2a;
char Fla = '🦩';
char Fox = '🦊';
char L = '🦁';
char BR = '🐻';
char BA = '🦡';
char P = '🐧';

cout << "Player 1, please choose your charecter!";
cout << " 1. " << Fla << " 2. " << Fox << " 3. " << L << " 4. " << BR << " 5. " << BA << " 6. " << P << endl;
cout << "Input 1-6: " ;
int p1a_C;
cin >> p1a_C;
if (p1a_C = 1){p1a = Fla;}
if (p1a_C = 2){p1a = Fox;}
if (p1a_C = 3){p1a = L;}
if (p1a_C = 4){p1a = BR;}
if (p1a_C = 5){p1a = BA;}
if (p1a_C = 6){p1a = P;}

cout << "Good choice!" << endl;
cout << "Player 2, please choose your charecter!";
cout << " 1. " << Fla << " 2. " << Fox << " 3. " << L << " 4. " << BR << " 5. " << BA << " 6. " << P << endl;
cout << "Input 1-6: ";
int p2a_C;
cin >> p2a_C;
if (p2a_C = 1){p2a = Fla;}
if (p2a_C = 2){p2a = Fox;}
if (p2a_C = 3){p2a = L;}
if (p2a_C = 4){p2a = BR;}
if (p2a_C = 5){p2a = BA;}
if (p2a_C = 6){p2a = P;}
cout << "Good choice!" << endl;
void Name();

}
void Name(){
    cout << "Now you must choose your names!" << endl;
    cout << "Player 1, please input your name: ";
    string p1n;
    cin >> p1n;
    cout << "Welcome " << p1n << "! That is a great name!"
    cout << "Player 2, please input your name: ";
    string p2n;
    cin >> p2n;
    cout << "Welcome " << p2n << "! That is also a great name!";
    cout << "Now that names and charecters are in order, let us begin!";
    void GameStart();

}
void GameStart(){

}