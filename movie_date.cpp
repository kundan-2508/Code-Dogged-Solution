#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repB(i,a,b) for (int i=a; i>=b; i--)

string calculate(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
 
    string str = "";
 
    int n1 = str1.length();
    int n2 = str2.length();
    int diff = n2 - n1;
 
    int carry = 0;
 
    repB(i,n1-1,0)
    {
        int sum = ((str1[i]-'0') + (str2[i+diff]-'0') + carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    repB(i,n2-n1-1,0)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
 
    reverse(str.begin(), str.end());
 
    return str;
}
int digitSum(string n)
{
    int len = n.size();
    int digSum = 0;
    rep(i,0,len)
    {
        digSum = digSum + (n[i] - '0');
    }
    if(digSum%9==0)
    {
        return 9;
    }
    return (digSum%9);
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string str1,str2;
        cin >> str1 >> str2;
        string sum = calculate(str1, str2);
        cout << digitSum(sum) << endl;
    }
    return 0;
}