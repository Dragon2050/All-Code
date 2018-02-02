#include<bits/stdc++.h>


using namespace std;

int main()
{
    string s;
    long long int number=0,divisor,ans=0,x;
    cout<<"PRESS THE NUMBER: ";
    cin>>s;
    cout<<endl<<"PRESS THE DIVISOR: ";
    cin>>divisor;
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        number=number*10+(s[i]-48);
        x=number/divisor;
        if(x>0)
        {
            ans=ans*10+x;
        }
        number=number%divisor;
    }
    cout<<endl<<"THE RESULT IS = "<<ans;
    cout<<endl<<"THE MODULUS IS = "<<number<<endl;
    return 0;
}
