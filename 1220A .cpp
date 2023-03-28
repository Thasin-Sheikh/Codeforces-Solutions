#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,array[100000+10],ar[100000],q,sum=0,sum1=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans=0,s=0,v1,v2,d,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000],p;
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n>>p;
    for(i=0; i<p.length(); i++)
    {
        if(p[i]=='z')
            cnt1++;
        else if(p[i]=='n')
            cnt++;
    }
    for(i=0; i<cnt; i++)
        cout<<1<<" ";
    for(i=0; i<cnt1; i++)
        cout<<0<<" ";
    cout<<endl;




}
