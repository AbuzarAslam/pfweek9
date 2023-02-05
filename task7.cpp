#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter any string....";
    getline(cin,name);
    int idx=0;
    while(name[idx] != '\0')
    {
        idx++;
    }
    if(idx%2==0)
    [
        cout << "Number of characters are " << idx << "(even)";
    ]
    if(idx%2!=0)
    [
        cout << "Number of characters are " << idx << "(odd)";
    ]

}