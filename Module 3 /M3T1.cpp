// CSC 134
// M3T1
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
//Done!

    return 0;
}