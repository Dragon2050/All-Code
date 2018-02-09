#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}

int main()
{
    int n,result=1;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(gcd(i,n)==1)
            result++;
    }
    cout<<"Result = "<<result<<endl;
    return 0;
}
