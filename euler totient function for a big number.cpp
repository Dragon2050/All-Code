#include<bits/stdc++.h>

using namespace std;

#define lli long long int

lli fi(lli n)
{
    lli result = n;
    for(int i=2; i*i <= n; i++)
    {
        if (n % i == 0)
            result -= result / i;
        while (n % i == 0)
            n /= i;
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main()
{
    while(1)
    {
        lli n;
        cin>>n;
        if(n==0)
            break;
        else if(n==1)
            cout<<"0"<<endl;
        else
            cout<<fi(n)<<endl;
    }

    return 0;
}

