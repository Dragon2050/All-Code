#include<bits/stdc++.h>

using namespace std;

int x;

int bigmod(int number,int power,int divisor)
{
    if(power==0)
        return 1;
    x = bigmod(number,power/2,divisor);
    x = ((x%divisor)*(x%divisor))%divisor;
    if(power%2==1)
        x=((number%divisor)*(x%divisor))%divisor;
    return x;
}

int main()
{
    int number,divisor,power,result;
    cout<<"PRESS THE NUMBER: ";
    cin>>number;
    cout<<endl<<"PRESS THE POWER: ";
    cin>>power;
    cout<<endl<<"PRESS THE DIVISOR: ";
    cin>>divisor;
    result = bigmod(number,power,divisor);
    cout<<endl<<"THE RESULT IS = "<<result<<endl;
    return 0;
}
