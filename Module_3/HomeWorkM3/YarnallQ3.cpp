// CSC 134
// Domonic Yarnall
//HWM3Q1
// 2/26/2025

#include <iostream>
using namespace std;

int main() {

string fd;
string F = "F";
string T = "T";
string choice;
string C = "C";
string L = "L";

cout << "You're in the jungle and have reached the tomb which holds the crystal that will make you immortal and cure the deadly snake bite you have on your ankle." << endl;
cout << "You have 5 minutes before the poison kills you. What do you do? " << endl;
cout << "Open the tomb and use the crystal, or cut off your leg?" << endl;
cout << "(type C to get the crystal or L to cut off your leg)" << endl;
cin >> choice;
cout << "You chose " << choice << endl;


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
    if (fd == F) {
        cout << "You could not find any fire." << endl;
        cout << "You died a slow death" << endl;
        cout << "Game Over!" << endl;
        return 0;
        
    }
    else if (fd == T){
        cout << "You did it! You are alive and help is on the way!" << endl;
        cout << "Victory is yours!" << endl;
    }
    else {
        cout << "I am afraid I do not know what that means" << endl;
        cout << "I only understand the choices f or t" << endl;
    }
}
else {
    cout << "I am afraid I do not know what that means" << endl;
    cout << "I only understand the choices c or l" << endl;
}

return 0;
}