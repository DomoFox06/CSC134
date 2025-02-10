// M2Lab1
// CSC 134
// Domonic Yarnall
// 2/10/2025

#include <iostream>
using namespace std;

int main() {
    cout << "Crate Calculation Program" << endl;
int length, width, hieght;
int volume;

cout <<"Enter the dimentions of the crate." << endl;
cout << "Length: ";
cin >> length;
cout << "Width: ";
cin >> width;
cout << "Hieght: ";
cin >> hieght;


volume = length * width * hieght;

cout << "A crate " << length << "by " << width << "by " << hieght << endl;
cout << "Is volume " << volume << endl;





    return 0;
}