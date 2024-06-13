#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout << "Welcome to the interview room  " << endl;
    cout << "Enter your grade for CSM 158: ";
    cin >> grade;

    switch (grade) {

    case 'A':
        cout << "You are within the range of 70-100\nYou've qualified for the interview";
        break;

    case 'B':
        cout << "You are within the range of 60-69\nYou've qualified for the interview";
        break;

    case 'C':
        cout << "You are within the range of 50-59\nYou've qualified for the interview";
        break;

    case 'D':
        cout << "You are within the range of 40-49\n You've qualified for the interview";
        break;

    case 'F':
        cout << "You are within the range of 0-49\nYou did not qualify for the interview";
        break;


    default:
        cout << "Invalid grade inputed, please enter your grade";
        break;



    }


    return 0;
}
