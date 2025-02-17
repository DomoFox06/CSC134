// CSC 134
// Dice Game
// Fox Yarnall
// 2/17/2025

#include <iostream>
using namespace std;
int main() {

int p1, p2, p1total, p2total;

p1total = 0;
p2total = 0;

cout << "Player 1: " << p1total << endl;
cout << "Player 2: " << p2total << endl;
cout << endl;
cout << "Enter Player 1 Roll" << endl;
cin >> p1;

cout << "Enter Player 2 Roll" << endl;
cin >> p2;

p1total += p1;
p2total += p2;

cout << "Player 1: " << p1total << endl;
cout << "Player 2: " << p2total << endl;

cout << "Enter Player 1 Roll" << endl;
cin >> p1;
cout << "Enter Player 2 Roll" << endl;
cin >> p2;

p1total += p1;
p2total += p2;

cout << "Player 1: " << p1total << endl;
cout << "Player 2: " << p2total << endl;

if (p1total > 100){
    cout << "Congradulations Player 1!" ;
}
else if (p1total < 100){
    cout << "Try Again";
}
else if (p2total > 100){
    cout << "Congradulations Player 2!" ;
}
else if (p2total < 100){
    cout << "Try Again";
}

return 0;
}