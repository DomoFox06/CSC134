// CSC 134
// Domonic Yarnall
//M3Lab2
// 2/26/2025

#include <iostream>
using namespace std;

int main() {

int num_grade;
string letter_grade;

const int A_PLUS= 100;
const int A     = 90;
const int B     = 80;
const int C     = 70;
const int D     = 60;
const int F     = 0;

cout << "Number grade to letter grde connvertion program." << endl;
cout << "Enter the number grade: " ;
cin >> num_grade;

if (num_grade >= A_PLUS) {
    letter_grade = "A+";
}
if (num_grade >= A && num_grade < A_PLUS) {
    letter_grade = "A";
}
if (num_grade >= B && num_grade < A){
letter_grade = "B";
}
if (num_grade >= C && num_grade < B){
    letter_grade = "C";
}
if (num_grade >= D && num_grade < C){
    letter_grade = "D";
}
if (num_grade >= F && num_grade < D){
    letter_grade = "F";
}

cout << "The grade " << num_grade << " is a " << letter_grade << endl;







return 0;
}