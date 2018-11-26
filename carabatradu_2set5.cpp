#include<iostream>
 using namespace std;

 int main()
 {
     int x ;
     int numar=0;
     cout<<"x = ",cin>>x;
     if(x < 0)
     {
         x = -x;
     }
     if(x == 0)
     {
         cout<<1<<endl;
     }
     while(x != 0)
     {
         x = x>>1;
         numar++;
     }
     if(numar != 0)
     {
         cout<<numar;
     }

     return 0;

 }
