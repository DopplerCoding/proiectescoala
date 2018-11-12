#include<iostream>

using namespace std;

int main()
{
    int a;
    cout<<"a = ",cin>> a;

    int b;
    cout<<"b = ",cin>>b;

    int rest;

    rest = 1;

    while(rest != 0) /// algortimul lui euclid
    {
        rest = a%b;
        if(rest == 0)
        {
            cout<<b;
            break;
        }
        a = b;
        b = rest;

    }



    return 0;
}
