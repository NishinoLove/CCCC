#include<bits/stdc++.h>
using namespace std;
int sushu(int n)
{
	int i,m=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 1;
		}
	}
	return n;
}
int main()
{
	int a,i,n;
	cin>>a;
	for(i=1;i<a;i++)
	{
		n=sushu(i);
		if(n!=1)
		{
			printf("%d\n",n);
		}
	}
	return 0;
}
