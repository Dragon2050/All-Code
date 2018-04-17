#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,temp1,m;
    cin>>n>>m;
    int w[n],p[n];
    double ap[n],x[n]={0},total=0,temp,profit=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i]>>w[i];
        ap[i]=(1.0*p[i])/w[i];
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
                temp1=w[i];
                w[i]=w[j];
                w[j]=temp1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
         if(total+w[i]<=m)
         {
             profit+=w[i]*ap[i];
             total+=w[i];
             x[i]=1;
         }
         else
         {
             double dif=m-total;
             profit+=dif*ap[i];
             total+=dif;
             x[i]=dif/w[i];
         }
    }
    cout<<"TOTAL PROFIT = "<<profit<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"weight = "<<w[i]<<" TAKE = "<<x[i]<<endl;
    }
    return 0;
}
