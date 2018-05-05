#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int main() 
{
	int n,m;
	cin>>n>>m;
	vector<int> v;
	int k;
	rep(i,0,m)
	{
	    cin>>k;
	    v.push_back(k);
	}
	int point = 0;
	int a[n+1]={0};
	rep(i,0,v.size())
	{
	    a[v[i]]++;
	}
	sort(a,a+n+1);
	cout<<a[1]<<endl;
	return 0;
}