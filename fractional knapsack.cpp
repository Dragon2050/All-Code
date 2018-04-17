#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp1,m;
    cin>>n>>m;
    int weight[n+1],profit[n+1],total=0;
    double ap[n+1],x[n+1]={0},temp,totalprofit=0;
    for(int i=0;i<n;i++)
    {
        cin>>profit[i]>>weight[i];
        ap[i]=(1.0*profit[i])/weight[i];
    }
     for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ap[i]<ap[j])
            {
                temp=ap[i];
                ap[i]=ap[j];
                ap[j]=temp;
                temp1=weight[i];
                weight[i]=weight[j];
                weight[j]=temp1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(total+weight[i]<=m)
        {
            total+=weight[i];
            x[i]=1;
            totalprofit+=weight[i]*ap[i];
        }
        else{
            double dif=m-total;
             totalprofit+=dif*ap[i];
             total+=dif;
             x[i]=dif/weight[i];
             break;
        }
    }
    cout<<"TOTAL PROFIT = "<<totalprofit<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"weight = "<<weight[i]<<" TAKE = "<<x[i]<<endl;
    }
    return 0;
}
