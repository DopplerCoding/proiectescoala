#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"n = ",cin>>n;
    int a;
    int b;
    int cmmdc;
    int maximum = 0;

    for(int i = 0;i<n-1;i++)
    {
        if(i == 0)
        {
            cout<<"a = ",cin>>a;
            cout<<"b = ",cin>>b;
            maximum=max(a,b);
            if(a == b)
            {
                cmmdc = a;
            }
            while(a != b)
            {
                if(a > b)
                {
                    a = a-b;
                }
                if(b > a)
                {
                    b = b-a;
                }
            }
            cmmdc = a;
            continue;
        }

        cout<<"b = ",cin>>b;

        maximum = max(cmmdc,b);

        if(cmmdc == b)
            {
                cmmdc = b;
            }
            while(cmmdc != b)
            {
                if(cmmdc > b)
                {
                    cmmdc = cmmdc-b;
                }
                if(b > cmmdc)
                {
                    b = b-cmmdc;
                }
            }
            cmmdc = b;




}

cout<<cmmdc<<endl;
 for(int h = maximum;h++;)
 {
     if(h % cmmdc== 0)
     {
         cout<<h;
         break;
     }

 }


 return 0;
}
