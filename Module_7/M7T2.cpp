/*
Domonic Yarnall
CSC 134
M7T2
Gold
4/30/25*/


#include <iostream>
#include "M7T2,1.h"
using namespace std;


class Rectangle{
private:
double width, length;

public:
void setWidth(double w);
void setLength(double len);
//get() should never change anything, so const makes sure we dont accedentily change something
double getWidth()const;
double getLength()const;
double getArea()const;


};

void Rectangle::setWidth(double w){
    width = w;
}
void Rectangle::setLength(double len){
    length = len;
}
double Rectangle::getWidth()const{
    return width;
}
double Rectangle::getLength()const{
    return length;
}
double Rectangle::getArea()const{
    double area = width * length;
    return area;
}

int main(){

    double wid, len, area;

    cout << "Rectangles" << endl;
    cout << "Rectangle 1" << endl;
    do{
    cout << "Enter Width: " ;
    cin >> wid;
    } while (wid <= 0);
    do{
    cout << "Enter Length: " ;
    cin >> len;
    }while (len <= 0);
    Rectangle r1 = Rectangle();
    r1.setWidth(wid);
    r1.setLength(len);

    cout << "The area is: "<< r1.getArea() << endl;

    return 0;
}