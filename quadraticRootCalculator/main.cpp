#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    /* Variables to be used
    Integers---  a, b, c
    Double--- Disc, Root1, Root2
    Input a, b and c
    Disc = b * b - 4 * a * c
    -------------------------
    if discriminant is 0 then Root1 = Root2 = -b /(2 * a)
    then print Roots are equal and is Root1
    else if Disc > o Then
            Root1 = (-b + sqrt disc) / (2 * a)
            Root2 = (-b - sqrt disc) / (2 * a)
            print Roots are unequal and are Root1 and Root2
    else Print roots are imaginary

    */


    int a;
    int b;
    int c;
    float Disc;
    float Root1;
    float Root2;

    // Take the inputs

    cout << "Enter the coefficient of the x square:" << endl;
    cin >> a;
    cout << "Enter the coefficient of the x:" << endl;
    cin >> b;
    cout << "Enter the constant:" << endl;
    cin >> c;

    Disc = b * b - 4 * a * c;


    // Use the value of the discriminant to find the roots

    if (Disc == 0) {
        Root1 = Root2 = -b / (2 * a);
        cout << "The roots are equal and is " << Root1 << endl;
    }
    else if (Disc > 0) {
        Root1 = (-b + sqrt(Disc)) / (2 * a);
        Root2 = (-b - sqrt(Disc)) / (2 * a);
        cout << "The roots are UNEQUAL and are " << Root1 << " and " << Root2 << endl;
    }
    else {
        cout << "Roots are IMAGINARY";
    }




    return 0;
}

