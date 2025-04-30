/*
Domonic Yarnall
CSC 134
M7T2
Gold
4/30/25*/


#include <iostream>
using namespace std;
#ifndef M7T2,1
#define M7T2,1

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

#endif