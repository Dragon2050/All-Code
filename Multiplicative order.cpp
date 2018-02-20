#include<bits/stdc++.h>

using namespace std;

int a[100000],b[100000],cnt;

int multiplicative_order(int number,int divisor)
{
    int result=1;
    while(cnt+1<divisor)
    {
        result=(result*number)%divisor;
        a[cnt]=result;
        cnt++;
        if(result==1)
        {
            return cnt;
        }
    }
}

int main()
{
    int number,power,divisor;
    cout<<"PRESS THE NUMBER: ";
    cin>>number;
    cout<<endl<<"PRESS THE DIVISOR: ";
    cin>>divisor;
    cout<<endl;
    int result=multiplicative_order(number,divisor);
    cout<<"result = "<<result<<endl<<endl;
    cout<<"THE MULTIPLICATIVE ORDER IS = ";
    for(int i=0;i<cnt;i++)
        cout<<a[i]<<" ";
    return 0;
}
