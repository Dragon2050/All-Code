#include<bits/stdc++.h>

using namespace std;

int mark[1000005];

vector<int> prime;

void sieve(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(!mark[i])
        {
            prime.push_back(i);
        }
        for(int k=0; k<prime.size(); k++)
        {
            int j=prime[k];
            if((i*j)>n)
                break;
            mark[i*j]=1;
            if(i%j==0)
                break;
        }

    }
}

int main()
{
    int n;
    scanf("%d",&n);
    sieve(n);
    cout<<prime.size()<<endl;
    for(int i=0; i<=50; i++)
    {
        cout<<prime[i]<< " ";
    }
    return 0;
}
