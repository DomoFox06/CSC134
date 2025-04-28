#include <iostream>
using namespace std;

// CSC 134
// M7T1 - Restaurant Rating
// Domonic Yarnall
// 4/28/24
// Use Restaurant class to store user ratings

// Next time we'll put the class in a separate file
class Restaurant {
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
	// constructor 
	Restaurant(string n, double r) {
		name = n;
		rating = r;
	}
    Restaurant(){

    }
	// getters and setters
    void setName(string n) {
        name = n; 
    }
    void setRating(double r) {
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
  void showInfo(){
    cout << "Restauraunt Name: ";
    cout << this->name << endl;
    cout << "Rating: ";
    cout << this->rating << endl;
  }
};

int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;
    Restaurant rest1 = Restaurant("Nona Sushi", 3.5);
    Restaurant rest2 = Restaurant();
    cout << "Enter restraunt name: ";
    string name;
    cin.ignore();
    getline(cin, name);
    rest2.setName(name);
    cout << "Enter restreaunt rating: ";
    double rating;
    cin >> rating;
    rest2.setRating(rating);

   
    return 0;

}