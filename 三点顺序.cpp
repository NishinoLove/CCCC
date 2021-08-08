#include<iostream>
#include<cstdio>
using namespace std;
 
int main()
{
    double x1,y1,x2,y2,x3,y3,k,b,con1,con2,con3;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        if(x1==0 && y1==0 && x2==0 && y2==0 && x3==0 && y3==0) break;
        if(x1==x2)
        {
            if(y1>y2) printf(x3>x1?"0\n":"1\n");
            else printf(x3>x1?"1\n":"0\n");
            continue;
        }
        k=(y1-y2)/(x1-x2);
        b=y1-k*x1;
        con1=x1<x2?1:0;
        con2=(k*x3+b>y3)?1:0;
        if(con1)
            printf(con2?"1\n":"0\n");
        else
            printf(con2?"0\n":"1\n");
    }
}
