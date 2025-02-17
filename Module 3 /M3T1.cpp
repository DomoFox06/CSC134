// CSC 134
// M3T1 and M3T2
// Fox Yarnall
// 2/17/2025

#include <iostream>
using namespace std;
int main() {

    // Variables
    double len1, wid1, len2, wid2;
    double area1, area2;

    //Ask for length and width

    cout << "What's the length of the first side?" << endl;
    cin >> len1;
    cout << "What's the width of the first side?" << endl;
    cin >> wid1;
    cout << "What's the length of the second side?" << endl;
    cin >> len2;
    cout << "What's the width of the first side?" << endl;
    cin >> len2;

    // Find area
    area1 = len1 * wid1;
    area2 = len2 * wid2;
    // Print the area
    cout << "Area of the first rectangle: " << area1 << endl;
    cout << "Area of the second rectangle: " << area2 << endl;


    // Which is larger?
    if (area1 > area2){
        cout << "The first one is larger." << endl;
    }
    else if (area2 > area1){
        cout << "The second one is larger." << endl;
    }
    else if ( area1 = area2){
        cout << "They are the same size." << endl;
    }
    //Done!

    return 0;
}