#include <iostream>

using namespace std;

int main()
{
/*
   Write a computer solution to generate the Fibonacci series given the first two terms. For
example, if the first two terms of a series are 0 and 1, the next (3rd) term is obtained by adding
the two preceding terms (1st and 2nd), etc. Thus the third term of the series will be 1 and the
fourth will be 2, etc. Generally, the Fibonacci series is defined as follows:
i

i2  i1
f f f
for i=3, 4, …., n
*/


/*
DECLARE FirstTerm, SecondTerm, NextTerm, n, i AS INTEGER
INPUT FirstTerm, SecondTerm, n
Print FirstTerm
Print SecondTerm

FOR i = 3 TO n STEP 1
   NextTerm = FirstTerm + SecondTerm
   Print NextTerm
   FirstTerm = SecondTerm
   SecondTerm = NextTerm
ENDFOR

*/
    // Declaration of the variables
    int firstTerm, secondTerm, nextTerm, n, i;

    // Input FirstTerm SecondTerm and The number (n)
    cout << "Enter the number of the Fibonacci sequence to generate:" << endl;
    cin >> n;
    cout << "Enter the first term:" << endl;
    cin >> firstTerm;
    cout << "Enter the second term:" << endl;
    cin >> secondTerm;

    // Print the first and second terms
    cout << "The first " << n << " Fibonacci Numbers are " << firstTerm << " " << secondTerm;

    for (i = 3; i<= n; i++) {
        nextTerm = firstTerm + secondTerm;
        cout << " " << nextTerm;

        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }










    return 0;
}
