#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << "Prime numbers from 1 to 1000 are:\n";

    for (int number = 1; number <= 1000; ++number) {
        if (number <= 1) continue; // 0 and 1 are not prime numbers
        if (number == 2) {
            cout << number << " "; // 2 is a prime number
            continue;
        }
        if (number % 2 == 0) continue; // even numbers other than 2 are not prime

        int divisor = 3;
        while (divisor <= sqrt(number)) {
            if (number % divisor == 0) break; // not a prime number
            divisor += 2;
        }

        if (divisor > sqrt(number)) {
            cout << number << " "; // no divisors found, number is prime
        }
    }

    cout << endl;
    return 0;
}
