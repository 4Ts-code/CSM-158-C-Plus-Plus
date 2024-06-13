#include <iostream>

using namespace std;



int main()
{
    string shortcode;
    int option1, option2;


    cout << "######B Welcome to Mini Momo .! B#######" <<endl;
    cout << "Please enter your shortcode" << endl;
    cin >> shortcode;


    if(shortcode == "*170#") {
        cout << "1. Transfer Money\n2. Momo Pay & PayBill\n3. Airtime & Bundles\n4. Allow CashOut" << endl;

        cout << "Select One" << endl;
        cin >> option1;
        if (option1 == 1) {
            cout << "1. Momo User\n2. Non Momo User\n3. Send With Care\n4. Favorite" << endl;
        }
        else if (option1 == 2) {
            cout << "1. Momo pay\n2. GhQR\n3. Pay Bill\n4. Fuels" << endl;
        }
         else if (option1 == 3) {
            cout << "1. Airtime\n2. Internet Bundles\n3. Fixed Broadband\n4. Schedule Airtime" << endl;
        }
         else if (option1 == 4) {
            cout << "Allow Cash Out\n1. Yes\n2. No\n0. Back" << endl;
        }


    }
    else {
        cout << "Invalid Shortcode" << endl;
    }
    return 0;
}
