/*
Domonic Yarnall
CSC-134
M5T1
3/26/25
*/

#include <iostream>
using namespace std;


void show_message();
void greet_user(string name);

int main(){

    cout << "Hello from main" << endl;
show_message();
string user = "Bob";
greet_user(user);



    return 0;
}

void show_message(){
    cout << "This is a message." << endl;
}
void greet_user(string name){
    cout << "Hello, " << name << endl;
}