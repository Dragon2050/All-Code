#include<bits/stdc++.h>

using namespace std;

int a[100000000];

int main()
{
    int number;
    cin>>number;
    int root=sqrt(number)+1;
    for(int i=3; i<=root; i+=2)
    {
        if(a[i]==0)
        {
            for(int j=i*i; j<=number; j=j+2*i)
                a[j]=1;
        }
    }
    cout<<"2 ";
    for(int i=3; i<=number; i+=2)
    {
        if(a[i]==0)
            cout<<i<<" ";
    }
    return 0;
}
