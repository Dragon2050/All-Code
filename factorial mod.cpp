#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number,mod,ans=1;
    cout<<"PRESS THE FACTORIAL NUMBER: ";
    cin>>number;
    cout<<endl<<"PRESS THE MOD: ";
    cin>>mod;
    for(int i=1;i<=number;i++)
    {
        ans=(ans*i)%mod;
    }
    cout<<endl<<"THE ANS IS = "<<ans<<endl;
    return 0;
}
