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
    cout << "Enter number do you want to find...";
    cin >> num;
    bool isFound = false;
    for(int idx=0;idx<size;idx++)
    {
        if(number[idx]==num)
        {
            isFound = true;
        }
    }
    if(isFound == true)
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
    
}