// M2HW1
//CSC 134
// Domonic Yarnall
// 2/10/2025

#include <iostream>
#include <iomanip>

using namespace std;

int main (){

cout << setprecision(2) << fixed << showpoint << endl;
cout <<"Welcome to your bank account, Grace!" << endl;
double balence, withdraw, deposit, newBalence;
balence = 226.05;
cout <<"Here is your balence: $" << balence << endl;
cout << "How much would you like to deposit?" << endl;
cout <<"Deposit";
cin >> deposit;
cout << "How much would you like to withdraw?" << endl;
cin >> withdraw;
newBalence = balence + deposit;
newBalence = balence - withdraw;

cout << "Grace" << endl;
cout << "Your Account Number is: 06242023" << endl;
cout << "Your new balence is: $" << newBalence << endl;
    return 0;
}
