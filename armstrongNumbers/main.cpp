#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    //Method1

    int num, newNum, lastDigit, sum;

    for (num = 100; num <= 999; num++) {
       newNum = num;
       sum = 0;

       while(num != 0) {
        lastDigit = num % 10;
        sum += pow(lastDigit, 3);
        num /= 10;
       }

       if(sum == newNum) {
        cout << newNum << " is an Armstrong Number" << endl;
       }


       num = newNum;
    }


    cout << "   " << endl;
    cout << "   " << endl;
    cout << "   " << endl;
    cout << "   " << endl;
    cout << "   " << endl;
    cout << "   " << endl;

    // Method 2    sum   num

    int  a, b, c;

    for (num = 100; num <= 999; num++) {
        sum = 0;

        a = num / 100;
        b = (num % 100) / 10;
        c = num % 10;

        sum = pow(a, 3) + pow(b, 3) + pow(c, 3);

         if(sum == num) {
        cout << num << " is an Armstrong Number" << endl;
       }

    }






    return 0;
}
