/*
CSC 134
Domonic Yarnall
4/21/25
M6 lab1*/


#include <vector>
#include <iostream>
using namespace std;

int main(){

const int RED = 1;
const int BLACK = 2;
const int EMPTY = 0;

int magazine[] = {BLACK, RED, BLACK, RED};
for (int shell : magazine){
    string shellname;
    if (shell == BLACK){
        shellname = "Black";
    }
    if (shell == RED){
        shellname = "Red";
    }
    cout << "Next shell: " << shellname << endl;
}






    return 0;
}