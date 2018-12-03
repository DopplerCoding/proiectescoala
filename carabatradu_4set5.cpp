#include<iostream>
using namespace std;
int main()
{
    unsigned int x;
    cout<<"x = ",cin>>x;
    unsigned int z;
    int k = 0;
    unsigned int y =x;
    int h;
    int f = 0;
    while(y != 0)
    {
        y = y >>1;
        k++;
    }
    for(int i = 1;i<=k;i++)
    {
        z =x;
        z =z<<(32- i);
        z = z>>31;
        h++;
        ///cout<<z<<endl;

        f = f*10+z;
    }
    cout<<f<<endl;

    int d = f;
    int g = 0;

    while(d > 0)
    {
        g = g*10 + (d%10);
        d = d/10;
    }
    if(g == f)
    {
        cout<<"palindrom"<<endl;
    }
    if(g != f)
    {
        cout<<"nu e palindrom"<<endl;
    }



    return 0;
}
