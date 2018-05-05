#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i*i<=b;i++)

int checkPrime(int n)
{
    if(n==1)
    {
        return 0;
    }
    rep(i,2,n)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main() 
{
    int test;
    cin>>test;
    while(test--)
    {
        int i,n;
        cin>>n;
        (checkPrime(n)==0)?cout<<"Not Prime\n":cout<<"Prime\n";
    }
    return 0;
}