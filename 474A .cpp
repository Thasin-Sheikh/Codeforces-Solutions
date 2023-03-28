#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,cnt=0,ans=0,d,b,c,flag=0,j=0,money,days,a,ar[100000+100],p[100000];
    vector<long long int >vec;
    string s="qwertyuiop asdfghjkl; zxcvbnm,./";
    string str;
    char ch;
    cin>>ch;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        for(j=0; j<s.length(); j++)
        {
            if(s[j]==str[i]&&ch=='R')
                cout<<s[j-1];
            else if(s[j]==str[i]&&ch=='L')
                cout<<s[j+1];
        }
    }
    cout<<endl;
}
