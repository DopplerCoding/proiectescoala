#include<iostream>

using namespace std;

int main()
{
    ///primele numere prime intre ele inseamna primele numere prime

    int n;
    cout<<"n = ",cin>>n;
    int x = 3;
    int z = 3;
    int check = 1;
    int k = 0;

    if(n == 0)
    {
        cout<<"nevoie de o valoare mai mare";
        return 0;
    }
    if(n == 1)
    {
        cout<<"nu sunt numere prime";
        return 0;
    }
    if(n == 2)
    {
        cout<<"2 este prim";
        return 0;
    }

    x = 3;

    if(n > 2)
    {
        cout<<2<<endl;
    }

    while(k <= n)
    {
        z = 3;check = 1;
        while(z*z <= x)
        {
            if(x % z == 0)
            {
                check = 0;
                z = x;
            }
            z++;
        }
        if(check == 1)
        {
            cout<<x<<endl;
            k++;
        }
        x+=2;
    }

    return 0;
}
