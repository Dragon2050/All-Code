#include<bits/stdc++.h>

using namespace std;

int x,y;

int gcd(int number,int divisor)
{
    if(number%divisor==0)
        return divisor;
    else
        return gcd(divisor,number%divisor);
}

void modular_inverse(int number,int divisor)
{
    int x2=1,y2=0,x1=0,y1=1,q,r;
    while(number%divisor!=0)
    {
        q=number/divisor;
        r=number%divisor;
        x=x2-(q*x1);
        y=y2-(q*y1);
        number=divisor;
        divisor=r;
        x2=x1;
        y2=y1;
        x1=x;
        y1=y;
    }
}

int main()
{
    int number,divisor;
    cout<<"PRESS THE NUMBER: ";
    cin>>number;
    cout<<endl<<"PRESS THE DIVISOR: ";
    cin>>divisor;
    if(gcd(number,divisor)==1)
    {
        modular_inverse(number,divisor);
        cout<<endl<<number<<"(-1) = "<<x<<endl;
        cout<<divisor<<"(-1) = "<<y<<endl;
    }
    return 0;
}
