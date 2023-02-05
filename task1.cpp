#include<iostream>
using namespace std;
main()
{
    int size;
    float sum=0;
    cout << "Enter the size of array";
    cin >> size;
    int number[size];
    for (int idx=0;idx<size;idx++)
    {
        cout << "Enter number....";
        cin >> number[idx];
        sum = sum+number[idx];
    }
    cout << "Sum is..." << sum << endl;
    cout << "Average is " << sum/size;
    
    
}