#include<iostream>
using namespace std;
main()
{
    int price;
    cout << "Enter the price of item...";
    cin >> price;
    int quarter,dime,nickel,penny;
    float sum;
    cout << "Enter Quarter...";
    cin >> quarter;
    cout << "Enter Quarter...";
    cin >> dime;
    cout << "Enter Quarter...";
    cin >> nickel;
    cout << "Enter Quarter...";
    cin >> penny;
    sum = (quarter*0.25)+(dime*0.10)+(nickel*0.05)+(penny*0.01);
    cout << sum;
    if(price>=sum)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

}