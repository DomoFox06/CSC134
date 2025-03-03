// CSC 134
// Domonic Yarnall
//HWM3Q1-Gold
// 2/26/2025

#include <iostream>
using namespace std;

int main() {

string fd;
string yes = "yes";
string no = "no";
string feeling;
string good = "good";
string bad = "bad";

cout << "Hello! How are you doing? Good or bad?" << endl;
cout << "(type good or bad)" << endl;
cin >> feeling;
cout << "You are doing " << feeling << endl;


if (feeling == good){
    cout << "Yay! I'm glad to hear that!" << endl;
    cout << endl;
    cout << "Do you want to be friends with me?" << endl;
    cout << "(type yes or no)" << endl;
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
else if (feeling == bad){
    cout << "Aw, I'm sorry. I hope you feel better soon" << endl;
    cout << "Maybe an ice cream will help you feel better" << endl;
    cout << endl;
    cout << "Would you like me to be your friend?" << endl;
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