#include<iostream>
using namespace std;
main()
{
    int array1[2];
    cout << "Enter 1st element of 1st array....";
    cin >> array1[0];
    cout << "Enter 2nd element of 1st array....";
    cin >> array1[1];
    int size;
    cout << "Enter size of second array...";
    cin >> size;
    int array2[size];
    for (int idx=0;idx<=size-1;idx++)
    {
        cout << "Enter number of 2nd array..";
        cin >> array2[idx];
    }
    cout << array1[0] << " ";
    for (int idx=0;idx<=size-1;idx++)
    {
        cout << array2[idx] << " ";
    }
    cout << array1[1];
}