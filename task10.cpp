#include<iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter any string....";
    getline(cin,name);
    int count=0;
    for(int idx=0;idx!='\0';idx++)
    {
        if(name[idx]=='a' ||name[idx]=='e' ||name[idx]=='i' ||name[idx]=='o' ||name[idx]=='u')
        {
            count = count + 1;
        }
    }
    cout << count;
}