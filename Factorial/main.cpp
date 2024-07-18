#include <iostream>

using namespace std;

int main()
{
    int prod,newn, n;

    cout << "Enter the number:"<< endl;
    cin>> n;
    newn = n;
    prod =1;

    while (n!=1) {
        prod = prod * n;

        n = n - 1;


    }

    cout << "The factorial of "<< newn << " is "<<prod<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
