#include<iostream>
using namespace std;
main()
{
    string name;
    char ch;
    cout << "Enter any string....";
    getline(cin,name);
    cout << "Enter character....";
    cin >> ch;
    int count = name.length();
    for(int idx=0;idx<=count;idx++)
    {
        if(name[idx]=='ch')
        {
            cout << "Founded";
        }
    }
}