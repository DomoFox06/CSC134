// CSC 134
// Domonic Yarnall
//HWM3Q1
// 2/26/2025

#include <iostream>
using namespace std;

int main() {

string fd;
string F = "yes";
string T = "no";
string choice;
string C = "Opened the tomb";
string L = "Lost your leg";

cout << "You're in the jungle and have reached the tomb which holds the crystal that will make you immortal and cure the deadly snake bite you have on your ankle." << endl;
cout << "You have 5 minutes before the poison kills you. What do you do? " << endl;
cout << "Open the tomb and use the crystal, or cut off your leg?" << endl;
cout << "(type C to get the crystal or L to cut off your leg)" << endl;
cin >> choice;
cout << "You " << choice << endl;


if (choice == C){
    cout << "It was a trap! You fell in a pit full of snakes" << endl;
    cout << "You died a painful death" << endl;
    cout << endl;
    cout << "Game Over!" << endl;
  
    return 0;
    
}
else if (choice == L){
    cout << "You're Losing blood!" << endl;
    cout << "You have to stop the blood or you will die!" << endl;
    cout << endl;
    cout << "Will you use a tourniquet or a fire?" << endl;
    cin >> fd;
    if (fd == yes) {
        cout << "Awesome! That's great!" << endl;
    }
    else if (fd == no){
        cout << "Aw, okay. If you change your mind, you know where to find me!" << endl;
    }
    else {
        cout << "I am afraid I do not know what that means" << endl;
        cout << "I only understand the words yes or no" << endl;
    }
}
else {
    cout << "I am afraid I do not know what that means" << endl;
    cout << "I only understand the feelings good or bad" << endl;
}

return 0;
}