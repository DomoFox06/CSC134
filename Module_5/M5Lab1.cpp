/*
Domonic Yarnall
M5Lab1
CSC-134
3/31/2025
*/

#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_window();
void choice_GoFurther();
void choice_stayPut();
void choice_Go_upstairs();
void choice_Go_downstairs();
void death();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
   choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
    cout << endl;
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  cout << "4. [Quit]" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
  else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
    }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_front_door();  // try again
  }
}

void choice_back_door(){
cout << endl;
  cout << "The backdoor is locked also, but you see an open window." << endl;
  cout << "Do you slip in through the window, or give up and go home?" << endl;
  cout << "1. Go through the window" << endl;
  cout << "2. Give up and go home" << endl;
  cout << "4. [Quit]" << endl;
  int choice;
  cin >> choice;
  if (1 == choice){
    choice_window();
  }else if (2 == choice){
    choice_go_home();
  }
  else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_back_door();  // try again
  }
 }

void choice_go_home() { 
    cout << endl;
    cout << "You are going home now, but the police are driving by." << endl;
cout << "They see you trespassing and are coming to get you." << endl;
cout << "You have been arrested. Game over!" << endl; }

void choice_window(){
cout << endl;
cout << "You have now entered the house, but the window slammed shut. There is no going back now." << endl;
cout << "What do you do? Go in further, or stay put?" << endl;
cout << "1. Go further" << endl;
cout << "2. Stay put" << endl; 
cout << "4. [Quit]" << endl;
int choice;
  cin >> choice;
  if (1 == choice){
    choice_GoFurther();
  }else if (2 == choice){
    choice_stayPut();
  }
  else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_window();  // try again
  }
}

void choice_GoFurther(){
cout << endl;
cout << "You go further into the house. You see two sets of stairs." << endl;
cout << "Do you go up to the second floor, or down to the basment?" << endl;
cout << "1. Go upstairs" << endl;
cout << "2. Go downstairs" << endl;
cout << "4. [Quit]" << endl;
int choice;
cin >> choice;
if (1 == choice){
  choice_Go_upstairs();
}
else if (2 == choice){
  choice_Go_downstairs();
}
else if (4 == choice){
  cout << "Ok, quitting game" << endl;
  return;
}
else {
  cout << "That's not a valid choice, please try again." << endl;
  cin.ignore(); // clear the user input
  choice_GoFurther();  // try again
}
}
void choice_stayPut(){
  cout << endl;
  cout << "While you are staying put you see a light coming close to you." << endl;
  cout << "Do you run away and go further, or continue staying put?" << end;
  cout << "1. Go further" << endl;
  cout << "2. Stay put" << endl;
  cout << "4. [Quit]" << endl;
  int choice;
  cin >> choice;
  if (1 == choice){
    choice_GoFurther();
  }
  else if (2 == choice){
    death();
  }
  else if (4 == choice){
    cout << "Ok, quitting game" << endl;
    return;
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_stayPut();  // try again
  }
}
void choice_Go_upstairs(){
  cout << endl;
  cout << "You are walking up the stairs, but a you see a mysterious light ahead." << endl;
  cout << "Do you go to the light, or run away?" << endl;
  cout << "1. Go to the light" << endl;
  cout << "2. Run away" << endl;
  cout << "4. [Quit]" << endl;
  int choice;
  cin >> choice;
  if (1 == choice || 2 == choice){
    death();
  }
  else if (4 == choice){
    cout << "Ok, quitting game" << endl;
    return;
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_Go_upstairs();  // try again
  }
}
void choice_Go_downstairs(){
  cout << endl;
  cout << "You are walking into the basement. You see two lights." << endl;
  cout << "Do you go to the white light, or yellow light?" << endl;
  cout << "1. White light" << endl;
  cout << "2. Yellow light" << endl;
  cout << "4. [Quit]" << endl;
  int choice;
  cin >> choice;
  if (1 == choice){
    cout << "You made it out of the house! You will survive! You go home." << endl;
    choice_go_home();
  }
  else if (2 == choice){
    death();
  }
  else if (4 == choice){
    cout << "Ok, quitting game" << endl;
    return;
  }
  else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    choice_Go_downstairs();  // try again
  }
}


void death(){
  cout << endl;
  cout << "The light was a terrible ghost and it killed you." << endl;
  cout << "You will now forever be stuck in the house. Game Over!" << endl;
}