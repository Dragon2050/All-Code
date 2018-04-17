#include<bits/stdc++.h>

using namespace std;

void quicksort(int *a,int low,int high)
{
    if(low>=high)
        return;
    int i=low;
    int j=high;
    int pivot=a[low];
    bool cnt=0;
    while(i<j)
    {
        if(cnt==0)
        {
            if(pivot<=a[j])
            {
                j--;
            }
            else{
                a[i]=a[j];
                i++;
                cnt=1;
            }
        }
        else{
            if(pivot>=a[i])
            {
                i++;
            }
            else{
                a[j]=a[i];
                j--;
                cnt=0;
            }
        }
    }
    a[i]=pivot;
    quicksort(a,low,i-1);
    quicksort(a,i+1,high);
}

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
    return 0;
}
