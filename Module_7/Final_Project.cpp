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
// sections
void Start(string &p1a, string &p2a, string &p1n, string &p2n, int &p1s, int &p2s);
void Charecter(string &p1a, string &p2a);
void Name(string &p1n, string &p2n);
void GamePlay(int &p1s, int &p2s, string p1a, string p1n, string p2a, string p2n);
void GameStart();
void Item();
void Item2();

// data
//class Avatars{
//private:
//string p1a;
//int p1s;
//int Ri;
//public:
//void p1avatar(string &p1a){}
/*void setName(string a1) {
    p1a = a1; 
}*/
//void p1name(string &p1n){}
void p1score(int &p1s){}
//p1I_dbl_spc(){}
//void p2avatar(string &p2a){}


//void p2name(string &p2n){}
void p2score(int &p2s){}
//p2I_dbl_spc(){}
//};
// Levels

void go_foward();
void go_back();
void chance();
void do_nothing();
void Skip();
//

//The dice rolling random number
int rollDice() {
    return (rand() % 10 + 1);
}
int rollDice2() {
    return (rand() % 10 + 1);
}
int rollDice_Item() {
    return (rand() % 4 + 1);
}
int rollDice_Chance() {
    return (rand() % 4 + 1);
}
int main(){

    srand(time(0)); //Random number generator

    int p1score = 0;
    int p2score = 0;
    string p1name, p2name, p1avatar, p2avatar;
    
    Start(p1avatar, p2avatar, p1name, p2name, p1score, p2score);
    Charecter(p1avatar, p2avatar);
    Name(p1name, p2name);
    

    GameStart();
    //cout << "!!p1name = " << p1name << endl;
    GamePlay(p1score, p2score, p1avatar, p1name, p2avatar, p2name);
            
       



    return 0;
}
void Start(string &p1a, string &p2a, string &p1n, string &p2n, int &p1s, int &p2s)
{
    cout << "Hello there! I am glad you chose to play this two player game!" << endl ;
    char s = 's';
    char choice;
    do{
     cout << "Please input s to start the game and choose your avatar: " ;
    cin >> choice;
    } while (s != choice); 
    if (s == s){
        
        

    }
}
void Charecter(string &p1a, string &p2a){
cout << endl << "Time to choose your charecter!" << endl;
//string p1, p2;
 
string Fla = "🦩";
string Fox = "🦊";
string L = "🦁";
string BR = "🐻";
string BA = "🦡";
string P = "🐧";

cout << "Player 1, please choose your charecter!";
cout << " 1. " << Fla << " 2. " << Fox << " 3. " << L << " 4. " << BR << " 5. " << BA << " 6. " << P << endl;
int p1a_C;
//Avatars avs = Avatars(); // holds all data
//string p1a = avs.p1avatar();
do{
cout << "Input 1-6: " ;
cin >> p1a_C;

} while (p1a_C > 6 || p1a_C < 0);
if (p1a_C == 1){p1a = Fla;}
if (p1a_C == 2){p1a = Fox;}
if (p1a_C == 3){p1a = L;}
if (p1a_C == 4){p1a = BR;}
if (p1a_C == 5){p1a = BA;}
if (p1a_C == 6){p1a = P;}


//getline(cin, p1a);
//avs.setName(p1a);

cout << "Good choice!" << endl;

cout << "Player 2, please choose your charecter!";
cout << " 1. " << Fla << " 2. " << Fox << " 3. " << L << " 4. " << BR << " 5. " << BA << " 6. " << P << endl;
int p2a_C;
do{
cout << "Input 1-6: ";
cin >> p2a_C;
} while (p2a_C > 6 || p2a_C < 0);
if (p2a_C == 1){p2a = Fla;}
if (p2a_C == 2){p2a = Fox;}
if (p2a_C == 3){p2a = L;}
if (p2a_C == 4){p2a = BR;}
if (p2a_C == 5){p2a = BA;}
if (p2a_C == 6){p2a = P;}


//getline(cin, p2a);

cout << "Good choice!" << endl;
 //Name();
 
}
void Name(string &p1n, string &p2n){
    cout << endl << "Now you must choose your names!" << endl;
   // string p1N;
    
    cout << "Player 1, please input your name: ";
    //cin.ignore();
    getline(cin, p1n);
   
        
     cout << "Welcome " << p1n << "! That is a great name!" << endl;
    cout << endl << "Player 2, please input your name: ";
    
    //cin.ignore();
    getline(cin, p2n);
    
    cout << "Welcome " << p2n << "! That is also a great name!" << endl;
    cout << "Now that names and charecters are in order, let us begin!" << endl;
    

}
void GameStart(){
cout << endl << "Now I will explain how the game is played." << endl <<
"You will each take turns rolling the die to move along the board" << endl
 << "Each space you land on will have actions you can take such as items" << endl <<
 "These spaces will help you reach your goal, or prove to be an obstacle." << endl <<
 "The goal of the game is to reach the end before your oponent." << endl;


}

void Item(int &p1s, int &p2s) {
    
int dbl_nxt_spc, cncl_go_bck, opnt_go_back, go_frwd;
//int p1s;
//int p2s;/*
//int p1score = 0;
//int p2score = 0;
//p1score(p1s);
//p2score(p2s);*/
int Ri = rollDice_Item();
cout << endl << "You landed on an Item space. An itme will randomley be picked for you."
    << endl << "Your item's action is..." << endl;
    if (Ri == 1) {
        cout << "Your next space is doubled!" << endl
        << "Be careful, that might mean that you go back double" << endl;
        dbl_nxt_spc++;
    }
    if (Ri == 2) {
        cout << "This cancels out the next Go Back space!" << endl;
        cncl_go_bck++;
    }
    if (Ri == 3) {
        cout << "Oof! Sorry "/* << p2n <<*/ ". You have to go back 5 spaces" << endl;
         p2s = p2s - 5;
    }
    if (Ri == 4) {
        cout << "Yay! You move foward five spaces!" << endl;
         p1s = p1s + 5;}

}
void Item2(int &p1s, int &p2s) {
    
    int dbl_nxt_spc, cncl_go_bck, opnt_go_back, go_frwd;
    //int p1s;
    //int p2s;/*
    //int p1score = 0;
    //int p2score = 0;
    //p1score(p1s);
    //p2score(p2s);*/
    int Ri = rollDice_Item();
    cout << endl << "You landed on an Item space. An itme will randomley be picked for you."
    << endl << "Your item's action is..." << endl;
        if (Ri == 1) {
            cout << "Your next space is doubled!" << endl
            << "Be careful, that might mean that you go back double" << endl;
            dbl_nxt_spc++;
        }
        if (Ri == 2) {
            cout << "This cancels out the next Go Back space!" << endl;
            cncl_go_bck++;
        }
        if (Ri == 3) {
            cout << "Oof! Sorry "/* << p2n <<*/ ". You have to go back 5 spaces" << endl;
             p1s = p1s - 5;
        }
        if (Ri == 4) {
            cout << "Yay! You move foward five spaces!" << endl;
             p2s = p2s + 5;}
    
    }
    
void go_foward(){
cout << "Go Forward!" << endl << "Go to the next space!" << endl;
}
void go_back(){
cout << "Go Back!" << endl << "Move back one space!" <<endl;
}
void chance(){
cout << "Chance!" << endl << "A space action is randomly given to you!" << endl;
}
void do_nothing(){
cout << "Do Nothing!" << endl;
}
void Skip(){
    cout << "Oof! Your next turn is skipped!" << endl;
}
    //GamePlay(p1score, p2score, p1avatar, p1name, p2avatar, p2name);
    void GamePlay(int &p1s, int &p2s, string p1a, string p1n, string p2a, string p2n){
    int total;
    char roll_choice;
    char R_C = 'r';
    int roll = rollDice();
    int roll2 = rollDice2();
    
    p1s = 0;
    p2s = 0;

   int p1Skip = 0;
   int p2Skip = 0;
       
cout << endl << "Let's begin!" << endl << endl;
do{
    do{
         do{
     cout << p1n << "'s turn!" << endl << "Roll the die!" << endl;
    cout << "Push r to roll " ;
    cin >> roll_choice;
    } while (roll_choice != R_C);
    cout << "Your roll is: " << roll << "!" ;
   
    for (int i =0; i < roll; i++){
        string die = "🎲";
        cout << die;
        p1s++;
    }
    while (p2Skip > 0){
        p2Skip--;
    }
} while (p2Skip != 0);


   
    if (p1s == 1 || p1s == 6 ||p1s == 11 ||p1s == 16 ||p1s == 21 ||p1s == 26 ||p1s == 31 ||p1s == 36 ||p1s == 41 ||p1s == 46){
        go_foward();
        p1s++;
    }
    else if (p1s == 2 ||p1s == 9 ||p1s == 12 ||p1s == 19 ||p1s == 22 ||p1s == 29 ||p1s == 32 ||p1s == 39 ||p1s == 42 ||p1s == 49 ){
        Item(p1s, p2s);
              }
    else if (p1s == 3 ||p1s == 8 ||p1s == 13 ||p1s == 18 ||p1s == 23 ||p1s == 28 ||p1s == 33 ||p1s == 38 ||p1s == 43 ||p1s == 48){
        go_back();
        p1s--;
    }
    else if (p1s == 4 ||p1s == 7 ||p1s == 14 ||p1s == 17 ||p1s == 24 ||p1s == 27 ||p1s == 34 ||p1s == 37 ||p1s == 44 ||p1s == 47 ){
        do_nothing();
    }else if (p1s == 5 ||p1s == 15 ||p1s == 25 ||p1s == 35 ||p1s == 45){
        chance();
       int RollI = rollDice_Chance();
       if (RollI == 1){go_foward(); p1s++;}
       else if (RollI == 2){go_back(); p1s--;}
       else if (RollI == 3){do_nothing();}
       else if (RollI == 4){Skip(); p1Skip++;}
    }
    else if (p1s == 10 ||p1s == 20 ||p1s == 30 ||p1s == 40 ||p1s == 50){
        Skip();
        p1Skip++;
    }
    
    
    
        
    do{
        do{
            cout << endl << p2n << "'s turn!" << endl << "Roll the die!" << endl;
           cout << "Push r to roll " ;
           cin >> roll_choice;
           } while (roll_choice != R_C);
           cout << "Your roll is: " << roll2 << "!" ;
           for (int i =0; i < roll2; i++){
               string die = "🎲";
               cout << die;
               p2s++;
           }
           while (p1Skip > 0){
            p1Skip--;
           }
    }while (p1Skip > 0);
      
       
    if (p2s == 1 || p2s == 6 ||p2s == 11 ||p2s == 16 ||p2s == 21 ||p2s == 26 ||p2s == 31 ||p2s == 36 ||p2s == 41 ||p2s == 46){
        go_foward();
        p2s++;
    }
    else if (p2s == 2 ||p2s == 9 ||p2s == 12 ||p2s == 19 ||p2s == 22 ||p2s == 29 ||p2s == 32 ||p2s == 39 ||p2s == 42 ||p2s == 49 ){
        Item2(p1s, p2s);
    }
    else if (p2s == 3 ||p2s == 8 ||p2s == 13 ||p2s == 18 ||p2s == 23 ||p2s == 28 ||p2s == 33 ||p2s == 38 ||p2s == 43 ||p2s == 48){
        go_back();
        p2s--;
    }
    else if (p2s == 4 ||p2s == 7 ||p2s == 14 ||p2s == 17 ||p2s == 24 ||p2s == 27 ||p2s == 34 ||p2s == 37 ||p2s == 44 ||p2s == 47 ){
        do_nothing();
    }else if (p2s == 5 ||p2s == 15 ||p2s == 25 ||p2s == 35 ||p2s == 45){
        chance();
        int RollI = rollDice_Chance();
       if (RollI == 1){go_foward(); p2s++;}
       else if (RollI == 2){go_back(); p2s--;}
       else if (RollI == 3){do_nothing();}
       else if (RollI == 4){Skip(); p2Skip++;}
    }
    else if (p2s == 10 ||p2s == 20 ||p2s == 30 ||p2s == 40 ||p2s == 50){
        Skip();
        p2Skip++;
    }
    /*
    int p1score = 0;
    int p2score = 0;
    p1score(p1s);
    p2score(p2s);*/


       cout << endl << p1n << "'s score: " << p1s << endl ;

       if (p1s == 1){
        cout << p1a <<
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 2){
        cout << "🟢" << p1a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 3){
        cout << "🟢🟡" << p1a <<
          "🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 4){
        cout << "🟢🟡🔴" << p1a <<
          "⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 5){
        cout << "🟢🟡🔴🔵" << p1a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 6){
        cout << "🟢🟡🔴🔵⚪" << p1a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 7){
        cout << "🟢🟡🔴🔵⚪🟢" << p1a <<
          "🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 8){
        cout << "🟢🟡🔴🔵⚪🟢🔵" << p1a <<
          "🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 9){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴" << p1a <<
          "🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 10){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p1a <<
           endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 11){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl << p1a << 
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 12){
        cout <<
        "🔴🔵⚪🟢🔵🔴🟡🟣" << endl
         << "🟢" << p1a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 13){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl
        << "🟢🟡" << p1a <<
          "🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 14){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴" << p1a <<
          "⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 15){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl
         << "🟢🟡🔴🔵" << p1a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 16){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪" << p1a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 17){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢" << p1a <<
          "🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 18){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl
        << "🟢🟡🔴🔵⚪🟢🔵" << p1a <<
          "🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 19){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴" << p1a <<
          "🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 20){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p1a <<
           endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 21){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << p1a <<
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 22){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🔴🔵⚪🟢🔵🔴🟡🟣" << endl
         << "🟢" << p1a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 23){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" 
        << "🟢🟡" << p1a <<
          "🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 24){
        cout  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴" << p1a <<
          "⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 25){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵" << p1a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 26){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪" << p1a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 27){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢" << p1a <<
          "🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 28){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵" << p1a <<
          "🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 29){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴" << p1a <<
          "🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 30){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p1a <<
           endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"  << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 31){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << p1a <<
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 32){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🔴🔵⚪🟢🔵🔴🟡🟣"
         << "🟢" << p1a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 33){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" 
        << "🟢🟡" << p1a <<
          "🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 34){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl<<
        "🟢🟡🔴" << p1a <<
          "⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 35){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
         << "🟢🟡🔴🔵" << p1a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 36){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
         << "🟢🟡🔴🔵⚪" << p1a <<
          "🔵🔴🟡🟣" << endl  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 37){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢" << p1a <<
          "🔴🟡🟣" << endl  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 38){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵" << p1a <<
          "🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 39){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴" << p1a <<
          "🟣" << endl  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 40){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p1a <<
           endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p1s == 41){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << p1a <<
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<
        "🏁" << endl;
       }
       else if (p1s == 42){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🔴🔵⚪🟢🔵🔴🟡🟣"
         << "🟢" << p1a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" <<
        "🏁" << endl;
       }
       else if (p1s == 43){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
        << "🟢🟡" << p1a <<
          "🔵⚪🟢🔵🔴🟡🟣" << "🏁" << endl;
       }
       else if (p1s == 44){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl<<
        "🟢🟡🔴" << p1a <<
          "⚪🟢🔵🔴🟡🟣" << "🏁" << endl;
       }
       else if (p1s == 45){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
         << "🟢🟡🔴🔵" << p1a <<
          "🔵🔴🟡🟣" << "🏁" << endl;
       }
       else if (p1s == 46){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
         << "🟢🟡🔴🔵⚪" << p1a <<
          "🔵🔴🟡🟣" << "🏁" << endl;
       }
       else if (p1s == 47){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
        << "🟢🟡🔴🔵⚪🟢" << p1a <<
          "🔴🟡🟣" << "🏁" << endl;
       }
       else if (p1s == 48){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
        << "🟢🟡🔴🔵⚪🟢🔵" << p1a <<
          "🟡🟣" << "🏁" << endl;
       }
       else if (p1s == 49){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴" << p1a <<
          "🟣" << "🏁" << endl;
       }
       else if (p1s == 50){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p1a <<"🏁" << endl;
       }
       cout << p2n << "'s score : " << p2s << endl;
      
       if (p2s == 1){
        cout << p2a <<
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 2){
        cout << "🟢" << p2a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 3){
        cout << "🟢🟡" << p2a <<
          "🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 4){
        cout << "🟢🟡🔴" << p2a <<
          "⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 5){
        cout << "🟢🟡🔴🔵" << p2a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 6){
        cout << "🟢🟡🔴🔵⚪" << p2a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 7){
        cout << "🟢🟡🔴🔵⚪🟢" << p2a <<
          "🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 8){
        cout << "🟢🟡🔴🔵⚪🟢🔵" << p2a <<
          "🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 9){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴" << p2a <<
          "🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 10){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p2a <<
           endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 11){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl << p2a << 
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 12){
        cout <<
        "🔴🔵⚪🟢🔵🔴🟡🟣" << endl
         << "🟢" << p2a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 13){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl
        << "🟢🟡" << p2a <<
          "🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 14){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴" << p2a <<
          "⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 15){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl
         << "🟢🟡🔴🔵" << p2a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 16){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪" << p2a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 17){
        cout << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢" << p2a <<
          "🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 18){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl
        << "🟢🟡🔴🔵⚪🟢🔵" << p2a <<
          "🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 19){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴" << p2a <<
          "🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 20){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p2a <<
           endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 21){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << p2a <<
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 22){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🔴🔵⚪🟢🔵🔴🟡🟣" << endl
         << "🟢" << p2a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 23){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" 
        << "🟢🟡" << p2a <<
          "🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 24){
        cout  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴" << p2a <<
          "⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 25){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵" << p2a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 26){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪" << p2a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 27){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢" << p2a <<
          "🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 28){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵" << p2a <<
          "🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 29){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴" << p2a <<
          "🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 30){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p2a <<
           endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"  << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 31){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << p2a <<
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 32){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🔴🔵⚪🟢🔵🔴🟡🟣"
         << "🟢" << p2a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 33){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" 
        << "🟢🟡" << p2a <<
          "🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 34){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl<<
        "🟢🟡🔴" << p2a <<
          "⚪🟢🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 35){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
         << "🟢🟡🔴🔵" << p2a <<
          "🔵🔴🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 36){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
         << "🟢🟡🔴🔵⚪" << p2a <<
          "🔵🔴🟡🟣" << endl  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 37){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢" << p2a <<
          "🔴🟡🟣" << endl  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 38){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵" << p2a <<
          "🟡🟣" << endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 39){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴" << p2a <<
          "🟣" << endl  <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 40){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p2a <<
           endl <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣🏁" << endl;
       }
       else if (p2s == 41){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << p2a <<
          "🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<
        "🏁" << endl;
       }
       else if (p2s == 42){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🔴🔵⚪🟢🔵🔴🟡🟣"
         << "🟢" << p2a <<
          "🔴🔵⚪🟢🔵🔴🟡🟣" <<
        "🏁" << endl;
       }
       else if (p2s == 43){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
        << "🟢🟡" << p2a <<
          "🔵⚪🟢🔵🔴🟡🟣" << "🏁" << endl;
       }
       else if (p2s == 44){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" << endl<<
        "🟢🟡🔴" << p2a <<
          "⚪🟢🔵🔴🟡🟣" << "🏁" << endl;
       }
       else if (p2s == 45){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
         << "🟢🟡🔴🔵" << p2a <<
          "🔵🔴🟡🟣" << "🏁" << endl;
       }
       else if (p2s == 46){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<< endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
         << "🟢🟡🔴🔵⚪" << p2a <<
          "🔵🔴🟡🟣" << "🏁" << endl;
       }
       else if (p2s == 47){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
        << "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
        << "🟢🟡🔴🔵⚪🟢" << p2a <<
          "🔴🟡🟣" << "🏁" << endl;
       }
       else if (p2s == 48){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
        << "🟢🟡🔴🔵⚪🟢🔵" << p2a <<
          "🟡🟣" << "🏁" << endl;
       }
       else if (p2s == 49){
        cout<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴" << p2a <<
          "🟣" << "🏁" << endl;
       }
       else if (p2s == 50){
        cout <<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣"<<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl<<
        "🟢🟡🔴🔵⚪🟢🔵🔴🟡🟣" <<endl
         << "🟢🟡🔴🔵⚪🟢🔵🔴🟡" << p2a <<"🏁" << endl;
       }
       
    } while (p1s < 50 && p2s < 50);
    if (p1s < p2s){
      cout << "Congratulations " << p2n << "! You win!! 🎉" << endl <<
      "🎊" << p2a << "🎊";
    }
    else if(p1s > p2s){
      cout << "Congratulations " << p1n << "! You win!! 🎉" << endl <<
      "🎊" << p1a << "🎊";
    }
    else if (p1s == p2s){
      cout << "Oh! It's a tie! Congrats to you both!" << endl << "Play again to find out the true winner!"
    }
}