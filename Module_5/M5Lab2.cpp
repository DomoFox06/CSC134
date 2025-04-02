/*
Domonic Yarnall
CSC-134
M5Lab2
4/2/2025
*/

#include <iostream>
using namespace std;

double getLength();
double getHeight();
double getWidth();


int main(){

double height, width, length, area;


cout << "Getting the area of a rectangle" << endl << endl;

width = getWidth();
//height = getHeight();
length = getLength();

//Surface Area = 2(lw + lh + wh)
area = width * length;
cout << "The area of your rectangle is " << area;
    return 0;
}

double getWidth(){
    cout << endl << "Please input width: ";
    double width;
    cin >> width;
    return width;
}
/*
double getHeight(){
    cout << endl << "Please input height: ";
    double height;
    cin >> height;
    return height;
}
    */
double getLength(){
    cout << endl << "Please input length: ";
    double length;
cin >> length;
cout << endl;
    return length;
}