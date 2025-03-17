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
 int W;
 cout << "Enter Width: ";
cin >> W;
int H;
cout << endl << "Enter Hight: ";
cin >> H;
cout << endl;
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
cout << pixel << "printed sideways" << endl;
for (int i = 0; i < 10; i++){
    cout << pixel << " ";
}
cout << endl;
cout << pixel << "printed vertically" << endl;
for (int i = 0; i < 10; i++){
    cout << pixel << endl;
}
cout << endl << "Print a box " << W << " by " << H << endl;
// nested loop
for (int h=0; h<H; h++){
    for (int w =0; w<W; w++){
        cout << pixel << " ";
    }
    cout << endl;
}

    return 0;
}