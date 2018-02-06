#include<bits/stdc++.h>

using namespace std;

int x,y;

void co_efficient(int number,int divisor)
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
        x1=x;
        y2=y1;
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
    co_efficient(number,divisor);
    cout<<endl<<"X = "<<x<<endl;
    cout<<"Y = "<<y<<endl;
    int gcd=((number*x)+(divisor*y));
    cout<<"THE GCD IS = "<<gcd<<endl;
    return 0;
}
