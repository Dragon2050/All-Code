#include<bits/stdc++.h>

using namespace std;

int main()
{
    pair<string,int>p;
    p.first="dipta";
    p.second=45;
    cout<<p.first<<" "<<p.second<<endl;
    cout<<endl<<endl;
    vector<pair<int,string> >vec;
    vector<pair<int,string> >::iterator it;
    vec.push_back(make_pair(21,"arnob"));
    vec.push_back(make_pair(22,"nabil"));
    cout<<vec[0].first<<" "<<vec[0].second<<endl;
    cout<<vec[1].first<<" "<<vec[1].second<<endl;
    cout<<endl<<endl;
    cout<<"ITERATION.."<<endl<<endl;
    for(it=vec.begin();it!=vec.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
