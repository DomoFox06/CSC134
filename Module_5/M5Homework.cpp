// CSC 134
// Domonic Yarnall
//M5HW
//Gold
// 4/2/2025



#include <iostream>
#include <iomanip>

using namespace std;
double getLength();
double getHeight();
double getWidth();

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
    cout << "Calculating average rain fall over a span of three months" << endl << endl;
    string month1, month2, month3;
    double rain1, rain2, rain3, rainTotal;
    string month = "Enter month: ";
    string rain = "Enter rainfall for ";

    cout << month;
    cin >> month1;
    cout << rain << month1 << " ";
    cin >> rain1;
 

    cout << month;
    cin >> month2;
    cout << rain << month2 << " ";
    cin >> rain2;

    cout << month;
    cin >> month3;
    cout << rain << month3 << " ";
    cin >> rain3;
    
    rainTotal = (rain1 + rain2 + rain3) / 3;
    cout << setprecision(2) << fixed;
    cout << "The average rainfall for " << month1 << ", " << month2 <<
    ", and " << month3 << " is " << rainTotal << " inches.";

}

void question2() {
    int age = 30;
    double height, width, length, area;


cout << "Getting the area of a 3D rectangle" << endl << endl;

width = getWidth();
height = getHeight();
length = getLength();

//Surface Area = 2(lw + lh + wh)
area = 2 * (length * width + length * height + width * height);

cout << "The area of your 3D rectangle is " << area;
}
double getWidth(){
    cout << endl << "Please input width: ";
    double width;
    cin >> width;
    return width;
}
double getHeight(){
    cout << endl << "Please input height: ";
    double height;
    cin >> height;
    return height;
}
double getLength(){
    cout << endl << "Please input length: ";
    double length;
cin >> length;
cout << endl;
    return length;
}
void question3(){
    int age = 30;
    int num;
    while (num > 10 || num < 1){
        string roman = "The Roman numeral version of ";
    cout << "Enter a number (1-10): " << endl;
    cin >> num;
    if (num == 1){cout << roman << num << " is I";}
    if (num == 2){cout << roman << num <<" is II";}
    if (num == 3){cout << roman << num <<" is III";}
    if (num == 4){cout << roman <<num <<" is IV";}
    if (num == 5){cout << roman <<num << " is V";}
    if (num == 6){cout <<roman <<num << " is VI";}
    if (num == 7){cout << roman <<num <<" is VII";}
    if (num == 8){cout << roman <<num <<" is VII";}
    if (num == 9){cout << roman <<num <<" is IX";}
    if (num == 10){cout <<roman <<num << " is X";}
    
    
    }
}
void question4() {
    int age = 30;
    cout << "Geometry Calculator" << endl << "1. Calculate the Area of a Circle" << endl << "2. Calculate the Area of a Rectangle"
<< endl << "3. Calculate the Area of a Triangle" << endl << "4. Quit" << endl << "Enter your choice (1-4):" << endl;


}
