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
    int number,divisor;
    cout<<"PRESS THE FIRST NUMBER: ";
    cin>>number;
    cout<<endl<<"PRESS THE SECOND NUMBER: ";
    cin>>divisor;
    int res = gcd(number,divisor);
    cout<<"THE GCD IS = "<<res<<endl;
    return 0;
}
