#include<bits/stdc++.h>

using namespace std;

#define white 0
#define black 1

int main()
{
    int n,temp,temp1,totalprofit=0;
    int max=-1;
    cin>>n;
    int profit[n+1],dead[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>dead[i]>>profit[i];
        if(dead[i]>max)
            max=dead[i];
    }
    int schedule[max]={0};
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
            if(schedule[j]==white)
            {
                schedule[j]=black;
                totalprofit+=profit[i];
                break;
            }
        }
    }
    cout<<endl<<endl;
    cout<<"PROFIT = "<<totalprofit<<endl;
    return 0;
}
