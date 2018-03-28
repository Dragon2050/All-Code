#include<bits/stdc++.h>

using namespace std;

int all[10000000];
vector<int> vec;

void factorization(int number)
{
    int root,root1;
    root=sqrt(number)+1;
    root1=sqrt(root)+1;
    for(int i=3; i<=root1; i=i+2)
    {
        if(all[i]==0)
        {
            for(int j=i*i; j<=root; j=j+2*i)
                all[j]=1;
        }
    }
    vec.push_back(2);
    for(int i=3; i<=root; i+=2)
    {
        if(all[i]==0)
            vec.push_back(i);
    }
}

int main()
{
    int number,cnt=0,p=0,q=0;
    vector<int> factor;
    cin>>number;
    factorization(number);
    while(number>1&&vec.size()>cnt)
    {
        if(number%vec[cnt]==0)
        {
            number=number/vec[cnt];
            factor.push_back(vec[cnt]);
            q=1;
        }
        else
            cnt++;
        if(number==1)
            p=1;
    }
    for(int i=0; i<factor.size(); i++)
    {
        if(i!=factor.size()-1)
            cout<<factor[i]<<" x ";
        else
            cout<<factor[i];
    }
    if(p==0)
    {
        if(q==1)
        {
            cout<<" x "<<number<<endl;
        }
        else
            cout<<number<<endl;
    }
    return 0;
}
