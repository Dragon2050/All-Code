#include<bits/stdc++.h>

using namespace std;

long long int gcd(long long int a,long long int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
}

int main()
{
    long long int number1,number2,g,lcm;
    cout<<"PRESS THE FIRST NUMBER: ";
    cin>>number1;
    cout<<endl<<"PRESS THE SECOND NUMBER: ";
    cin>>number2;
    g=gcd(number1,number2);
    lcm=(((number1*1.0)/g)*number2);
    cout<<endl<<"THE GCD IS = "<<g;
    cout<<endl<<"THE LCM IS = "<<lcm;
    return 0;
}
