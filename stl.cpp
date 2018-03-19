#include<bits/stdc++.h>

using namespace std;

bool myfunc(int a,int b)
{
    return (a>b);
}

int main()
{
    vector<int>vec;
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.begin()+3);
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl<<endl;
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";

    cout<<endl<<endl;
    sort(vec.begin(),vec.end(),myfunc);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
