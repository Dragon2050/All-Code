#include<bits/stdc++.h>

using namespace std;

void eulerfunction(int n)
{
    int phi[n+1];
    for(int i=1;i<=n;i++)
        phi[i]=i;
    for(int p=2;p<=n;p++)
    {
        if(phi[p]==p)
        {
            phi[p]=p-1;
            for(int j=2*p;j<=n;j+=p)
                phi[j]=(phi[j]/p)*(p-1);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<"TOTIENT OF "<<i<<" is = "<<phi[i]<<endl;
    }
}

int main()
{
    int n;
    cout<<"Press the value: ";
    cin>>n;
    cout<<endl;
    eulerfunction(n);
   return 0;
}
