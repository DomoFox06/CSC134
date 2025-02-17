// CSC 134
// Dice Game
// Fox Yarnall
// 2/17/2025

#include <iostream>
using namespace std;
int main() {

int p1, p2;

p1 = 0;
p2 = 0;

cout << "Player 1: " << p1 << endl;
cout << "Player 2: " << p2 << endl;
cout << endl;
cout << "Enter Player 1 Roll" << endl;
cin >> p1;
cout << "Enter Player 2 Roll" << endl;
cin >> p2;

cout << "Player 1: " << p1++ << endl;
cout << "Player 2: " << p2++ << endl;

cin >> p1;
cin >> p2;

cout << "Player 1: " << p1++ << endl;
cout << "Player 2: " << p2++ << endl;

if (p1 > 100){
    cout << "Congradulations Player 1!" ;
}
else if (p1 < 100){
    cout << "Try Again";
}
if (p2 > 100){
    cout << "Congradulations Player 2!" ;
}
else if (p2 < 100){
    cout << "Try Again";
}

return 0;
}