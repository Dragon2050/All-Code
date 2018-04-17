#include<bits/stdc++.h>

using namespace std;

int temp[100010];

void mergesort(int *a,int low,int high)
{
    if(low>=high)
        return;
    int mid=(low+high)/2;
    mergesort(a,low,mid);
    mergesort(a,mid+1,high);
    int i=low;
    int j=mid+1;
    int index=0;
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            temp[index]=a[i];
            i++;
        }
        else
        {
            temp[index]=a[j];
            j++;
        }
        index++;
    }
    while(i<=mid)
    {
        temp[index]=a[i];
        i++;
        index++;
    }
    while(j<=high)
    {
        temp[index]=a[j];
        j++;
        index++;
    }
    for(int i=low,index=0; i<=high; i++,index++)
    {
        a[i]=temp[index];
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
        cin>>a[i];
    mergesort(a,0,n-1);
    for(int i=0; i<n; i++)
        cout<<a[i]<<"\t";
    return 0;
}
