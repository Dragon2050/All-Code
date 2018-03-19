#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int>mylist;
    list<int>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_back(19);
    mylist.push_back(12);
    mylist.push_front(56);
    mylist.push_front(5);
    int siz=mylist.size();
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<" ";
    cout<<endl<<endl;
    mylist.reverse();
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<" ";
    cout<<endl<<endl;
    ///mylist.clear();
    ///cout<<mylist.size();
    cout<<endl<<endl;
    list<int>lis(4,9);
    for(it=lis.begin();it!=lis.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;
    cout<<"COPY"<<endl<<endl;
    int a[5]={1,3,5,7,9};
    list<int>b(a,a+5);
    for(it=b.begin();it!=b.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;
    cout<<"INSERT"<<endl<<endl;
    it=mylist.begin();
    it++;
    mylist.insert(it,7);
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;
    it=find(mylist.begin(),mylist.end(),19);
    mylist.insert(it,18);
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;
    cout<<"DELETE......"<<endl<<endl;
    it=mylist.begin();
    mylist.erase(it);
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;
    it=find(mylist.begin(),mylist.end(),56);
    mylist.erase(it);
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;
    cout<<"CHECK EMPTY"<<endl<<endl;
    if(mylist.empty())
        cout<<"EMPTY"<<endl;
    else
        cout<<"FILLED"<<endl;
    cout<<endl<<endl;
    cout<<"FIRST AND LAST ELEMENT"<<endl<<endl;
    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;
    cout<<endl<<endl;
    cout<<"DELETE FROM FIRST AND LAST"<<endl<<endl;
    mylist.pop_front();
    mylist.pop_back();
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;
    return 0;
}
