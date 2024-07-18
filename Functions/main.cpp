#include <iostream>
#include <string>

using namespace std;

/*void greet();
void greetings(string name);
*/
int sumThem(int a, int b);

int main() {
    /*
    string name;

    cout << "Enter your name!! " << endl;

    cin >> name;
    greet();
    greetings(name);
    return 0;
    */

    int result = sumThem(34, 56);
    cout << "The sum is: " << result << endl;

    return 0;
}

/*
void greet() {
    cout << "Hello world!" << endl;
}

void greetings(string name) {
    cout << "Good Morning " << name << " How're you doing?" << endl;
}
*/

int sumThem(int a, int b) {
    int sum = a + b;
    return sum;
}
