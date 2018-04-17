#include<bits/stdc++.h>

using namespace std;

#define white 0
#define black 1

int cnt,total;

int main()
{
    int n,temp,temp1;
    cin>>n;
    int dead[n+1],profit[n+1],seq[n+1]={0};

    for(int i=0;i<n;i++)
        cin>>dead[i]>>profit[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(profit[i]<profit[j])
            {
                temp=profit[i];
                profit[i]=profit[j];
                profit[j]=temp;
                temp1=dead[i];
                dead[i]=dead[j];
                dead[j]=temp1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=dead[i]-1;j>=0;j--)
        {
            if(seq[j]==white)
            {
                seq[j]=black;
                total+=profit[i];
                cnt++;
                break;
            }
        }
    }
    cout<<"PROFIT = "<<total<<endl;
    cout<<"ITEM = "<<cnt<<endl;
    return 0;
}
