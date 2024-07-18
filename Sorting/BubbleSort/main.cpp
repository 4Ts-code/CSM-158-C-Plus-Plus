#include <iostream>

using namespace std;

int main()
{
    int n,comps,i, c;
    int x[1000];
    cout << "Enter the number of numbers" << endl;
    cin >> n;

    for( i = 0; i < n; i++) {
        cout << "Enter number "<< i +1 << endl;
        cin >> x[i];
    }

    for (int pass = 1; pass <= n-1; pass++){
        for( comps = 0; comps < n-pass; comps++){
            if (x[comps] > x[comps + 1] ) {
                c = x[comps];
                x[comps] = x[comps + 1];
                x[comps + 1] = c;
            }
        }
    }

    for (i=0; i<n; i++)
    {
        cout << x[i]<<" ";
    }
    cout << "Hello world!" << endl;
    return 0;
}
