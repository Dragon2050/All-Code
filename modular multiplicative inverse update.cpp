#include<bits/stdc++.h>

using namespace std;

int x;

int check_prime(int mod)
{
    int check=0;
    int root=sqrt(mod)+1;
    for(int i=2;i<=root;i++)
    {
        if(mod%i==0)
        {
            check=1;
            break;
        }
    }
    return check;
}

int bigmod(int number,int power,int mod)
{
    if(power==0)
        return 1%mod;
    x=bigmod(number,power/2,mod);
    x=(x*x)%mod;
    if(power%2==1)
        x=(number*x)%mod;
    return x;
}

int main()
{
    int number,power,mod,result,check;
    cout<<"PRESS THE NUMBER: ";
    cin>>number;
    cout<<endl<<"PRESS THE POWER: ";
    cin>>power;
    cout<<endl<<"PRESS THE MOD VALUE: ";
    cin>>mod;
    check=check_prime(mod);
    if(check==1)
    {
        cout<<endl<<"MODULAR MULTIPLICATIVE INVERSE IS NOT POSSIBLE"<<endl;
    }
    else
    {
       result = bigmod(number,power-2,mod);
        cout<<endl<<"THE RESULT IS = "<<result<<endl;
    }
    return 0;
}
