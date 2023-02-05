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
        cout << name[idx] << endl;
        idx++;
    }
}