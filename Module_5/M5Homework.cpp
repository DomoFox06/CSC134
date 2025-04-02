// CSC 134
// Domonic Yarnall
//M5HW
//Gold
// 4/2/2025



#include <iostream>


using namespace std;
int main(){
bool keep_going = true;
int choice;
void question1 ();
void question2 ();
void question3 ();
void question4 ();

while (true == keep_going){
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "3. Question 3" << endl;
    cout << "4. Question 4" << endl;
    cout << "0. Exit" << endl;

    cin >> choice;
    if (1 == choice){
    question1();
    keep_going = false;
    }
    else if (2 == choice){
        question2();
        keep_going = false;
    }
else if (3 == choice){
    question3();
    keep_going = false;
}
else if (4 == choice){
    question4();
    keep_going = false;
}
else if(0 == choice){
    cout << "Bye bye! Have a good day!" << endl;
    keep_going = false;
}
else{
    cout << "Not valid choice" << endl;
    }

}


    return 0;
}
void question1() {
    int age = 25;
    cout << "Calculating average rain fall over a span of three months" << endl;
    string month1, month2, month3;
    double rain1, rain2, rain3, rainTotal;
    string month = "Enter month: ";
    string rain = "Enter rainfall for ";

    string month;
    cin >> month1;
    cout << endl;
    string rain, month1;
    cin >> rain1;
    cout << endl;

    string month;
    cin >> month2;
    cout << endl;
    string rain, month2;
    cin >> rain2;
    cout << endl;

    string month;
    cin >> month3;
    cout << endl;
    string rain, month3;
    cin >> rain3;
    
    
    
    cout << "The average rainfall for " << month1 << ", " << month2 <<
    ", and " << month3 << "is " << rainTotal << " inches.";

}

void question2() {
    int age = 30;
    cout << "Question 2 goes here" << endl;
}
void question3(){
    int age = 30;
    cout << "Question 3 goes here" << endl;
}
void question4() {
    int age = 30;
    cout << "Question 4 goes here" << endl;
}