#include<bits/stdc++.h>


using namespace std;


int binarysearch(int low,int high,int *a,int item)
{
    int mid,res=-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(a[mid]<item)
        {
           res=mid;
           low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return res;
}

int binarysearch1(int low,int high,int *a,int item)
{
    int mid,res=-1;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(a[mid]<=item)
        {
           res=mid;
           low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return res;
}


int main()
{
    int n,item;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<"AFTER SORT THE ELEMENTS: "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
    cout<<endl;
    cin>>item;
    int res=binarysearch(0,n-1,a,item);
    int res1=binarysearch1(0,n-1,a,item);
    if(a[res1]!=item)
    {
        cout<<"THE ITEM IS NOT FOUND"<<endl;
        return 0;
    }
    for(int i=res+1;i<=res1;i++)
        cout<<i+1<<"\t";
    return 0;
}
