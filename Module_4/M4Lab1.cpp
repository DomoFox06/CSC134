/*
Domomic Yarnall
CSC-134
M4Lab1
3/17/25
*/

#include <iostream>
using namespace std;

int main(){
//The emojis overlap with each other, specifically the heart emoji hides behind the rice emoji
string pixel = "🦊❤️🍚";
cout << pixel << endl;


int count = 0;
while (count < 10){
    cout << pixel;
    count++;

}
cout << endl;
count = 0;
do{
    cout << pixel << " ";
    count++;

}while(count < 5);
cout << endl;
for (int i = 0; i < 10; i++){
    cout << pixel << " ";
}



    return 0;
}