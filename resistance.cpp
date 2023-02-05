#include<iostream>
using namespace std;
main()
{
    int size;
    int sum=0;
    cout << "Enter the number of resistors....";
    cin >> size;
    int number[size];
    for (int idx=0;idx<size;idx++)
    {
        cout << "Enter number....";
        cin >> number[idx];
        sum = sum + number[idx];
    }
    cout << "The total resistane of the circuit is " << sum << " ohms";
}