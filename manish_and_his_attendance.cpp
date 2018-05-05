#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

int checkHim(vector<int> v , int k)
{
    rep(j,0,v.size())
    {
        if(v[j] == k || v[j] == k+1)
        {
            return 1;
        }
    }
    return 0;
}

int main() 
{
    int n,s,k;
    cin>>n>>s>>k;
    int p;
    int m;
    int cnt = 0;
    vector<int> v;
    rep(i,0,n)
    {
        v.clear();
        cin>>p;
        rep(j,0,p)
        {
            cin>>m;
            v.push_back(m);
        }
        
        (checkHim(v,k)==1)?(cnt++):(cnt);
    }
    
    ((cnt*100)/n >= 75)?cout<<"Eligible\n":cout<<"Not Eligible\n";
    
    return 0;
}