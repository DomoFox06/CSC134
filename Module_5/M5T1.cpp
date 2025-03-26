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
int double_a_number(int number);

int main(){

    cout << "Hello from main" << endl;
show_message();
string user = "Bob";
greet_user(user);

int num;
cout << "Enter an intager: ";
cin >> num;
int answer = double_a_number(num);
cout << endl << "Double that is: " << answer << endl;

    return 0;
}

void show_message(){
    cout << "This is a message." << endl;
}
void greet_user(string name){
    cout << "Hello, " << name << endl;
}
int double_a_number(int number){
    int answer = number * 2;
    return answer;
}