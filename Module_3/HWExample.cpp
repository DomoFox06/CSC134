// CSC 134
// Domonic Yarnall
//HWExample
// 3/5/2025

// The code that Copilot came up with

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
    }
    else if (2 == choice){
        question2();
    }
else if (3 == choice){
    question3();
}
else if (4 == choice){
    question4();
}
else if(0 == choice){
    return 0;
}
else{
    cout << "Not valid choice" << endl;
}

}


    return 0;
}