/*
Alexander Spears
CSC-134
m3Lab1
*/

#include <iostream>
using namespace std;

int main() {

    //variables
    string survival;


    // output

    cout << "In the heat of battle, your choice is flight or fight" << endl;
    cout << endl;
    cout << "What   do  you    do?" << endl;
    cin >> survival;
    if (survival == "fight" or "Fight") {
        cout << "It was a brutal battle" << endl;
        cout << "You and them traded blow after blow" << endl;
        cout << "Covered in blood, seeing red" << endl;
        cout << "You won" << endl;

    }
    else if (survival == "flight" or "Flight") {
        cout << "You simple turned and ran away" << endl;
        cout << "You didnt win, but you got away without a scratch" << endl;

    }
    else {
        cout << "No choice is a choice too" << endl;
    }
    cout << "And then the world turns black" << endl;

}