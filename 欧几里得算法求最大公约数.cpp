#include<bits/stdc++.h>
using namespace std;
int gcd(int m,int n)
{
	int t;
	while(n>0)
	{
		t=m%n;
		m=n;
		n=t;
	}
	return m;
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<gcd(m,n)<<endl;
	return 0;
}
