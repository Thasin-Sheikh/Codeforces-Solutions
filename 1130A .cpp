#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    double n;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    vector<char>vc;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a<0)
            c++;
        if(a>0)
            d++;
    }
    p=ceil(n/2);
    if(d>=p)
        cout<<1<<endl;
    else if(c>=p)
        cout<<-1<<endl;
    else cout<<0<<endl;

}
