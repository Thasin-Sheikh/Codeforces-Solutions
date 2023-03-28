#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a==5)
            c++;
        else d++;
    }
   // cout<<c<<" "<<d<<endl;
    if(c<9&&d>=1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(d<1)
    {
        cout<<-1<<endl;
        return 0;
    }

    while(c>=9)
    {
        for(i=1; i<=9; i++)
        {
            cout<<5;
            cnt++;
        }
        c=c-9;
    }
        for(i=1;i<=d;i++)
            cout<<0;
    }

