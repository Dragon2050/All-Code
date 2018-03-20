#include<bits/stdc++.h>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("dipto");
    s.push("nabil");
    s.push("arnob");
    s.push("mainul");
    s.push("sabbir");
    s.push("borhan");
    s.pop();
    cout<<s.top()<<endl;
    cout<<endl<<endl;
    while(!s.empty())
    {
        string x;
        x=s.top();
        cout<<x<<endl;
        s.pop();
    }
    return 0;
}
