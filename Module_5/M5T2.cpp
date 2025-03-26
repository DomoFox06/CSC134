/*
Domonic Yarnall
CSC-134
M5T2
3/26/25
*/

#include <iostream>
using namespace std;


int square(int num);
void printAnswerLine(int num1, int num2);

int main(){
/*
   string num1 = "Numbers: ";
    printAnswerLine(num1);
*/


    
    for (int num = 1; num > 0 && num <= 10; num++){

    int squared;
    squared = square(num);

   //cout << num << " squared is " << squared << endl;
        printAnswerLine(num, squared);
    }

    return 0;
}

int square(int num){
    int answer;
    answer = num * num;
    return answer;
}
void printAnswerLine(int num1, int num2){
    cout << num1 << " squared is " << num2 << endl;

}