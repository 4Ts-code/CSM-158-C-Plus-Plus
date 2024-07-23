/*
A number N may be said to be either a perfect, deficient or abundant number. If the sum of
 divisors (excluding the number itself) equals the original number, the number is said to be
 perfect. If the sum of the divisors is less than the number itself then the number is said to be
 deficient otherwise the number is said to be abundant. For example, the number 12 has the
 divisors 1, 2, 3, 4 and 6. The sum of these divisors is 16. Since the sum of the divisors of 6 is
 greater than 6, we will say 6 is an abundant number. Write down a computer solution that can
 classify a given number as a perfect, abundant or a deficient number with an appropriate caption.
 */

#include <iostream>

using namespace std;

int main()
    // Variable Declariation and initialization
{   int N, divisor;
    int sum = 0;

    // Taking Input of the Number
    cout << "Enter the Number: "<< endl;
    cin >>N;


    // Finding the divisors and summing them up
    for (int i = 1; i<N; i++) {
        if (N % i == 0) {
            divisor = i;
            sum += divisor;
        }
    }

    // Checking if the number is Perfect, Deficient or abundant
    if (sum < N)
        cout << N << " is a Deficient Number "<< "since the sum of its divisors is "<< sum << " and it's less than "<< N << endl;
    else if (sum == N)
        cout << N << " is a Perfect Number "<< "since the sum of its divisors is "<< sum << " and it's equal to "<< N << endl;
    else
        cout << N << " is an Abundant Number "<< "since the sum of its divisors is "<< sum << " and it's greater than "<< N << endl;




    return 0;
}
