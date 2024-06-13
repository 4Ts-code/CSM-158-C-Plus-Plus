#include <iostream>

using namespace std;


// For multi Dimensional array we have an array inside an array..just like nested if
int main()
{
    int arrayName [5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
        };
    cout << arrayName[3][4] << endl;
    //Answer will be 20

    cout<< " ############### ########################## #############"<< endl;

    // Printing just some of the values or elements
/*
    for(int i = 0; i<5; i++) {
        cout << arrayName [i][i]<< endl;
    }
*/

/*
    for(int j=0; j<5; j++){
        for(int i = 0; i<5; i++) {
        //cout << j<< "" <<i << endl;
        cout << arrayName [j][i] << " ";

        }
    cout << ""<< endl;
    }

*/  int y = 1;
    for(int j=0; j<5; j++){
        for(int i = 0; i<5; i++) {
        cout << "Input" << y << "Number" << endl;
        cin >> arrayName [j][i];
        y++;

        }

    }



    for(int j=0; j<5; j++){
        for(int i = 0; i<5; i++) {
        //cout << j<< "" <<i << endl;
        cout << arrayName [j][i] << " ";

        }
    cout << ""<< endl;
    }

















    return 0;
}
