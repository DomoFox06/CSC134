/*
Domonic Yarnall
CSC-134
Gold
*/

#include <iostream>
using namespace std;


int main(){
    bool keep_going = true;
    int choice;
    void question1 ();
    void question2 ();
    void question3 ();
    void question4 ();
    void question5();
    void question6();
    
    while (true == keep_going){
        cout << "1. Question 1" << endl;
        cout << "2. Question 2" << endl;
        cout << "3. Question 3" << endl;
        cout << "4. Question 4" << endl;
        cout << "5. Question 5" << endl;
        cout << "6. Question 6" << endl;
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
    else if (5 == choice){
        question5();
        keep_going = false;
    }
    else if (6 == choice){
        question6();
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
        cout << "Question 1 goes here" << endl;
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
    void question5(){
        int age = 30;
        // Question 5
    }
    void question6(){
        int age = 30;
        // Question 6
    }