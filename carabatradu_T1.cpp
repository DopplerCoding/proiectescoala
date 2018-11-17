#include<iostream>

using namespace std;

int main()
{
    int V[6] = {7,56,4,98,45,8};

    int L[6];

    int n = 6;

    L[n-1] = 1;

    for(int i = n-2;i>= 0;i--)
    {
        int maxim=0;
        for(int j = i+1;j<=n-1;j++)
        {
            if((L[j]>=maxim) && (V[j]>=V[i]))
            {
                maxim = L[j];
            }

        }
        L[i]=1+maxim;

    }

    for(int i = 0;i<=n-1;i++)
    {

        cout<<L[i]<<" ";
    }
}
