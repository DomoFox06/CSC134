/*
Domonic Yarnall
CSC 134
4/23/25
Final Project
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void Start();
void Charecter();
void Name();
void GameStart();
void GamePlay();
//The dice rolling random number
int rollDice() {
    return (rand() % 10 + 1);
}
int rollDice2() {
    return (rand() % 10 + 1);
}
int main(){

    srand(time(0)); //Random number generator

    Start();
    
       



    return 0;
}
 void Start(){
    cout << "Hello there! I am glad you chose to play this two player game!" << endl ;
    char s = 's';
    char choice;
    do{
     cout << "Please input s to start the game and choose your avatar: " ;
    cin >> choice;
    } while (s != choice); 
    if (s = s){
        Charecter();
    }
}
void Charecter(){
cout << endl << "Time to choose your charecter!" << endl;
int p1, p1a, p2, p2a;
char Fla = '🦩';
char Fox = '🦊';
char L = '🦁';
char BR = '🐻';
char BA = '🦡';
char P = '🐧';

cout << "Player 1, please choose your charecter!";
cout << " 1. " << Fla << " 2. " << Fox << " 3. " << L << " 4. " << BR << " 5. " << BA << " 6. " << P << endl;
int p1a_C;
do{
cout << "Input 1-6: " ;
cin >> p1a_C;
} while (p1a_C > 6 || p1a_C < 0);
if (p1a_C = 1){p1a = Fla;}
if (p1a_C = 2){p1a = Fox;}
if (p1a_C = 3){p1a = L;}
if (p1a_C = 4){p1a = BR;}
if (p1a_C = 5){p1a = BA;}
if (p1a_C = 6){p1a = P;}

cout << "Good choice!" << endl;
cout << "Player 2, please choose your charecter!";
cout << " 1. " << Fla << " 2. " << Fox << " 3. " << L << " 4. " << BR << " 5. " << BA << " 6. " << P << endl;
int p2a_C;
do{
cout << "Input 1-6: ";
cin >> p2a_C;
} while (p2a_C > 6 || p2a < 0);
if (p2a_C = 1){p2a = Fla;}
if (p2a_C = 2){p2a = Fox;}
if (p2a_C = 3){p2a = L;}
if (p2a_C = 4){p2a = BR;}
if (p2a_C = 5){p2a = BA;}
if (p2a_C = 6){p2a = P;}
cout << "Good choice!" << endl;
 Name();

}
void Name(){
    cout << endl << "Now you must choose your names!" << endl;
    string p1N;
   // string p1n;
    

    
    cout << "(Warning! Do not input a space in name!)" << endl;
    cout << "Player 1, please input your name: ";
    cin >> p1N;
        
     cout << "Welcome " << p1N << "! That is a great name!" << endl;
    cout << endl << "Player 2, please input your name: ";
    string p2n;
    cin >> p2n;
    cout << "Welcome " << p2n << "! That is also a great name!" << endl;
    cout << "Now that names and charecters are in order, let us begin!" << endl;
     GameStart();

}
void GameStart(){
cout << endl << "Now I will explain how the game is played." << endl <<
"You will each take turns rolling the die to move along the board" << endl
 << "Each space you land on will have actions you can take such as items" << endl <<
 "These spaces will help you reach your goal, or prove to be an obstacle." << endl <<
 "The goal of the game is to reach the end before your oponent." << endl;

 GamePlay();
}
    void GamePlay(){
    int total;
    char roll_choice;
    char R_C = 'r';
    int roll = rollDice();
    int roll2 = rollDice2();

    int p1s = 0;
    int p2s = 0;
    string p1N;
    string p2n;
cout << endl << "Let's begin!" << endl << endl;
do{
    do{
     cout << p1N << "'s turn!" << endl << "Roll the die!" << endl;
    cout << "Push r to roll " ;
    cin >> roll_choice;
    } while (roll_choice != R_C);
    cout << "Your roll is: " << roll << "!" ;
   
    for (int i =0; i < roll; i++){
        string die = "🎲";
        cout << die;
        p1s++;
    }
    
    do{
        cout << endl << p2n << "'s turn!" << endl << "Roll the die!" << endl;
       cout << "Push r to roll " ;
       cin >> roll_choice;
       } while (roll_choice != R_C);
       cout << "Your roll is: " << roll2 << "!" ;
       for (int i =0; i < roll2; i++){
           string die = "🎲";
           cout << die;
       }
       p2s = p2s + roll2;
       
       cout << endl << p1N << "'s score: " << p1s << endl <<
       p2n << "'s score : " << p2s << endl;
    
    } while (p1s < 50 && p2s < 50);

}