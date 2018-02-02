#include<bits/stdc++.h>

using namespace std;

int a[100000000],prime[100000000],s[10000000],cnt=1,lower,upper;

vector <int> sg,segment;

void sieve(int number)
{
    int root=sqrt(number)+1;

    for(int i=3; i<=root; i+=2)
    {
        if(a[i]==0)
        {
            for(int j=i*i; j<=number; j+=2*i)
                a[j]=1;
        }
    }

    prime[0]=2;

    for(int i=3; i<=number; i+=2)
    {
        if(a[i]==0)
        {
            prime[cnt]=i;
            cnt++;
        }
    }

}


void segmented_sieve()
{
    int start,si;

    if(lower==0)
    {
        sg[1]=0;
    }

    else if(lower==1)
    {
        sg[0]=0;
    }

    for(int i=0; i<cnt; i++)
    {
        si=prime[i];
        start=si*si;

        if(start<lower)
        {
            start=((lower+si-1)/si)*si;
        }

        for(int j=start; j<=upper; j+=si)
            sg[j-lower]=0;
    }

    for(int i=0; i<sg.size(); i++)
    {
        if(sg[i]!=0)
            segment.push_back(sg[i]);
    }

    for(int i=0; i<segment.size(); i++)
        cout<<segment[i]<<" ";

}



int main()
{
    cout<<"PRESS THE LOWER BOUND: ";
    cin>>lower;
    cout<<endl<<"PRESS THE UPPER BOUND: ";
    cin>>upper;
    int root=sqrt(upper)+1;
    sieve(root);

    for(int i=lower; i<=upper; i++)
        sg.push_back(i);

    segmented_sieve();

    return 0;
}
