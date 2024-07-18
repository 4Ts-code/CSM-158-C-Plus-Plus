#include <iostream>
#include <cmath>

using namespace std;
// Function Prototypes
double getVariance(double arry[], double avg, int n);
double getElementsSum (double arry[], int n);



int main()
{
    int N = 10;
    cout << "Enter Number of Elements!" << endl;
    cin>> N;

    double values[N];
    double sum = 0, average =0, variance =0, stdDev =0, element=0;

    // Get the Sum

    sum = getElementsSum(values, N );

    cout << "The sum of the numbers is :"<< sum<< endl;

    average = sum / N;

    cout << "The average of the numbers is :"<< average<< endl;

    // Getting the variance

    variance = getVariance(values, average, N) / N;


    cout << "The variance of the number is "<< variance << endl;

    stdDev = sqrt(variance);
    cout << "The Standard Deviation of the number is "<< stdDev << endl;
    return 0;
}

// Defining function to take inputs and return the sum
double getElementsSum (double arry[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter the "<< i+1<<" Number:"<< endl;
        cin >> arry[i];
        sum = sum + arry[i];


    }
    return sum;
}


// Defining function to calculate the variance
double getVariance(double arry[], double avg, int n) {
    double variance = 0;
    for (int i =0; i<n; i++)
    {
        variance += pow(arry[i] - avg, 2);


    }

    return variance;




}
