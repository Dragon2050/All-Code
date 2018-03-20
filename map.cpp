#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string,int>m;
    map<string,int>::iterator it;
    m["dipta"]=42;
    m["arnob"]=45;
    m["arnob"]=48;
    m.insert(make_pair("nabil",49));
    printf("%d\n",m["arnob"]);
    printf("%d\n",m["nabil"]);
    cout<<endl<<endl;
    it=m.begin();
    cout<<it->first<<"\t"<<it->second<<endl;
    it++;
    cout<<it->first<<"\t"<<it->second<<endl;
    cout<<endl<<endl;
    cout<<"LOOP"<<endl<<endl;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<"\t"<<it->second<<endl;
    return 0;
}
