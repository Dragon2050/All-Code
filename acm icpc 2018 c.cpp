#include<bits/stdc++.h>

using namespace std;

#define lli long long int

int mark[1000105];
long long M = 10000007;

vector<int> prime;

void sieve()
{
    for(int i=2;i<=1000100;i++)
    {
        if(!mark[i])
        {
            prime.push_back(i);
        }
        for(int j=0;j<prime.size();j++)
        {
            int k=prime[j];
            if(i*k>1000100)
                break;
            mark[i*k]=1;
            if(i%k==0)
                break;
        }
    }
}

void fun(int n)
{
    lli sum=1;
    for(int i=0;prime[i]<=n;i++)
    {
        lli val=prime[i];
        lli cnt=0;
        while(val<=n)
        {
            cnt=cnt+(n/val);
            val=val*prime[i];
        }
        ///sum=((sum % M) * ((cnt+1) % M)*((cnt+2) % M) * (0.5)) % M;
        if(cnt%2==1)
        {
            lli res=((cnt+1)/2)*(cnt+2);
            sum=((sum%M)*(res%M))%M;
        }
        else
        {
            lli res=((cnt+2)/2)*(cnt+1);
            sum=((sum%M)*(res%M))%M;
        }

    }
    cout<<sum % M<<endl;
}

int main()
{
    sieve();
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        else
        {
            fun(n);
        }
    }

    return 0;
}
