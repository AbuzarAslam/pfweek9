#include<iostream>
using namespace std;
main()
{
    int size;
    int num;
    cout << "Enter the size of array";
    cin >> size;
    int number[size];
    for (int idx=0;idx<size;idx++)
    {
        cout << "Enter number....";
        cin >> number[idx];
    }
    int smallest=number[0];
    for(int idx=0;idx<=size;idx++)
    {
        if(number[idx]<smallest)
        {
            smallest=number[idx];
        }
    }
    cout << "Smallest number is ..." << smallest;
    
    
}