// CSC 134
// M3Lab1
// Fox Yarnall
// 2/24/2025

#include <iostream>
using namespace std;

int main(){

// this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  string choice;
  
  string c = "c";
  string i = "i";
  string n = "n";
  string s = "s";
  string f = "f";
  // ask the question
  cout << "Do you choose Ice Cream or Cake?" << endl;
  cout << "Type I or C: "; 
  cin >> choice;
    
  
  // using if, make a decision based on the user's choice

  if (i == choice) {
  	cout << "You chose Ice Cream!" << endl;
    cout << endl;
    cout << "Would you like sprinkles?" << endl;
    cout << "S for sprinkles. N for none" << endl;
    cin >> choice;
    if (s == choice){
      cout << "Exelent! Enjoy your ice cream!" << endl;
    }
    else if (n == choice){
      cout << "How could you not want sprinkles?" << endl;
      cout << "No ice cream for you!" << endl;
      cout << " Please leave." << endl;
    }
    else {
      cout << "I'm sorry, that is not a valid choice." << endl;
    }
  }
  else if (c == choice) {

  	cout << "You chose Cake!" << endl;
    cout << endl;
    cout << "Would you like to eat with a spoon or fork?" << endl;
    cout << "S for spoon. F for fork" << endl;
    cin >> choice;
    if (s == choice){
      cout << "What kind of person eats cake with a spoon?" << endl;
      cout << "You are not worthy of this cake!" << endl;
      cout << "Please leave." << endl;
    }
    else if (f == choice){
      cout << "Excelent Choice!" << endl;
      cout << "Please enjoy your cake!" << endl;
    }
    else {
      cout << "I'm sorry, that is not a valid choice." << endl;
    }
    
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method
