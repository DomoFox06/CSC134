// M2HW1
//CSC 134
// Domonic Yarnall
// 2/10/2025
// Gold
#include <iostream>
#include <iomanip>

using namespace std;

int main (){

cout << setprecision(2) << fixed << showpoint << endl;
cout <<"Welcome to your bank account, Grace!" << endl;
double balance, withdraw, deposit, newBalance;
balance = 226.05;
cout <<"Here is your balance: $" << balance << endl;
cout << "How much would you like to deposit?" << endl;
cout <<"Deposit: ";
cin >> deposit;
cout << "How much would you like to withdraw?" << endl;
cout << "Withdraw: ";
cin >> withdraw;
newBalance = balance + deposit - withdraw;


cout << "Grace" << endl;
cout << "Your Account Number is: 06242023" << endl;
cout << "Your new balence is: $" << newBalance << endl;
    return 0;
}
