#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p=0,t=0,k,q,sum1=0,cnt=0,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    char array[101][101];
    long long int count[100000];
    memset(count,0,sizeof(count));
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='1')
            cnt++;
    }
    if(cnt==str.length())
    {
        for(i=1; i<str.length(); i++)
            cout<<1;
    }
    else
    {
        for(i=0; i<str.length(); i++)
        {
            if(str[i]=='0'&&p==0)
            {
                p=1;
                continue;
            }
            else cout<<str[i];
        }
    }
    cout<<endl;

}
