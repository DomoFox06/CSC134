//Domonic Yarnall
//CSC-134
//M4T1
//3/10/25


#include <iostream>
using namespace std;

int main (){

int num = 1;
while(num <= 5){
    cout << "Hello number " << num << endl;
    num ++;

}
cout << "Done!" << endl;

for (int i = 1; i <= 10; i++){
    cout << "Happy Mar" << i << endl;
}

cout << "Table of Square" << endl;
cout << "---------------" << endl;
int mun = 1;
int sq;
while(mun <= 10){
    sq = mun * mun;
    cout << mun << "\t" << sq << endl;
    mun = mun + 1;

    bool is_valid= false;
    int choice;
    while (is_valid == false){
    cout << "Press 1 or 2 to finish." << endl;
    cin >> choice;
    if (choice == 1){
        cout << "You chose 1." << endl;
        is_valid = true;

    }
    else if (choice == 2){
        cout << "You chose 2." << endl;
        is_valid = true;
    }
    else {
        cout << "Sorry, not valid. Try again." << endl;
    }
   
}
cout << "Goodbye" << endl;
    return 0;
}
}