#include<bits/stdc++.h>

using namespace std;

int gcd(int number1,int number2)
{
    if(number1%number2==0)
        return number2;
    return gcd(number2,number1%number2);
}

int modular_inverse(int number ,int divisor)
{
    int x_2=0,y_2=1,x_1=1,y_1=0,x,y,q,r;
    while(number%divisor!=0)
    {
        q=number/divisor;
        r=number%divisor;
        x=x_2-(q*x_1);
        y=y_2-(q*y_1);
        number=divisor;
        divisor=r;
        x_2=x_1;
        x_1=x;
        y_2=y_1;
        y_1=y;
    }
    return y;
}

int main()
{
    int number,divisor,result;
    cout<<"PRESS THE NUMBER: ";
    cin>>number;
    cout<<endl<<"PRESS THE DIVISOR: ";
    cin>>divisor;
    result=gcd(number,divisor);
    if(result==1)
    {
        result=modular_inverse(number,divisor);
        cout<<endl<<"THE RESULT IS = "<<result<<endl;
    }
    return 0;
}
