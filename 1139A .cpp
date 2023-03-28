#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,ans=0,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n>>str;
    for(i=0; i<str.length(); i++)
    {
        c=str[i]+'0';
        if(c%2==0)
            cnt++;

    }
    for(i=1; i<str.length(); i++)
    {
        c=str[i]+'0';
        if(c%2==0)
        {
            if(i==1)
                ans=ans+1;
            else ans=ans+i;
        }
        //cout<<ans<<endl;
    }

cout<<ans+cnt<<endl;



}
