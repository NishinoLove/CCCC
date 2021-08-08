//ע�⣺1=<a,b,c<=1000000000
 
#include<iostream>
#include<cstdio>
using namespace std;
 
long long mod(long long a,long long b,long long c)
{
    long long t;
    if(a==0 || c==1) return 0;
    if(b==0) return 1;
    if(b%2) return ((a%c)*mod(a,b-1,c))%c;
    t=mod(a,b/2,c);
    return (t*t)%c;
}
 
int main()
{
    long long n,a,b,c;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        printf("%lld\n",mod(a,b,c));
    }
}
