#include<bits/stdc++.h>

using namespace std;

double triangle(int x1,int x2,int x3,int y1,int y2,int y3)
{
    double area;
    int x=((x1*y2)+(x2*y3)+(x3*y1));
    int y=((x2*y1)+(x3*y2)+(x1*y3));
    int x_y=x-y;
    area=(1.0*x_y)/2;
    return area;
}

int main()
{
    int n;
    cin>>n;
    int x[n+1],y[n+1],xx[n+1],yy[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
    double m[n+1];
    int origin_x=x[0],origin_y=y[0];
    for(int i=1; i<n; i++)
    {
        if(x[i]<origin_x)
        {
            origin_x=x[i];
            origin_y=y[i];
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(x[i]==origin_x&&y[i]==origin_y)
            ;
        else
        {
            m[cnt]=((y[i]-origin_y)*1.0)/(x[i]-origin_x);
            xx[cnt]=x[i];
            yy[cnt]=y[i];
            cnt++;
        }
    }
    double temp;
    int temp1,temp2,temp3,a,b,c;
    for(int i=0; i<cnt; i++)
    {
        for(int j=i+1; j<cnt; j++)
        {
            if(m[i]>m[j])
            {
                temp=m[i];
                m[i]=m[j];
                m[j]=temp;
                temp1=xx[i];
                xx[i]=xx[j];
                xx[j]=temp1;
                temp2=yy[i];
                yy[i]=yy[j];
                yy[j]=temp2;
            }
        }
    }
    stack<int> sx;
    stack<int> sy;
    sx.push(origin_x);
    sx.push(xx[0]);
    sy.push(origin_y);
    sy.push(yy[0]);
    for(int i=1; i<cnt; i++)
    {
        sx.push(xx[i]);
        sy.push(yy[i]);
        temp1=sx.top();
        sx.pop();
        temp2=sx.top();
        sx.pop();
        temp3=sx.top();
        sx.pop();
        a=sy.top();
        sy.pop();
        b=sy.top();
        sy.pop();
        c=sy.top();
        sy.pop();
        double res=triangle(temp1,temp2,temp3,a,b,c);
        if(res>=0)
        {
            sx.push(temp1);
            sx.push(temp2);
            sx.push(temp3);
            sy.push(a);
            sy.push(b);
            sy.push(c);
        }
        else
        {
            sx.push(temp1);
            sx.push(temp3);
            sy.push(a);
            sy.push(c);
            while(1)
            {
                int d=sx.top();
                sx.pop();
                int e=sx.top();
                sx.pop();
                int f=sx.top();
                sx.pop();
                int g=sy.top();
                sy.pop();
                int h=sy.top();
                sy.pop();
                int i=sy.top();
                sy.pop();
                double res1=triangle(d,e,f,g,h,i);
                if(res1>=0)
                {
                    sx.push(d);
                    sx.push(e);
                    sx.push(f);
                    sy.push(g);
                    sy.push(h);
                    sy.push(i);
                    break;
                }
                else
                {
                    sx.push(d);
                    sx.push(f);
                    sy.push(g);
                    sy.push(i);
                }
            }
        }
    }
    cout<<endl<<endl;
    while(!sx.empty())
    {
        int q=sx.top();
        int r=sy.top();
        cout<<q<<" "<<r<<endl;
        sx.pop();sy.pop();
    }
    return 0;
}
