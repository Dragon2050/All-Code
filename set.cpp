#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<string> s;
    set<string> :: iterator it;
    s.insert("nabil");
    s.insert("arnob");
    s.insert("mainul");
    s.insert("sabbir");
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<endl;
    pair<set <string>::iterator,bool> p;
    p=s.insert("akhi");
    if(p.second==false)
        cout<<"cannot insert"<<endl;
    else
        cout<<"CAN BE INSERTED"<<endl;
    return 0;
}
