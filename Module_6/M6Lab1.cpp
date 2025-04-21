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
// Using a Vector Ex:2
// size() tells you how many are in the vector
// .push_back(0 removes an item from the end of vector
vector<int> mag;

mag.push_back(RED);
mag.push_back(BLACK);
int num_shells = 2;

int current_shell = mag.at(num_shells - 1);
cout << "Next shell: " << current_shell << endl;

mag.pop_back();

num_shells--;

current_shell = mag.at(num_shells - 1);
cout << "Next shell: " << current_shell << endl;

mag.pop_back();
cout << "Mag contains " << mag.size() << " shells." << endl;
cout << "It could hold up to " << mag.capacity() << " before resizing." << endl;



    return 0;
}