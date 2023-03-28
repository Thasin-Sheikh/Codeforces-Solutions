#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,l,m,n,o,p=3,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=0,flag,c,f,ans,a,b,d,e;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    long long int count[100000];
    memset(count,0,sizeof(count));
    stack<long long int>stck;
    cin>>a>>b>>c>>d>>e;
    count[a]++;
    count[b]++;
    count[c]++;
    count[d]++;
    count[e]++;
    sum=a+b+c+d+e;
    k=count[a];
    l=count[b];
    m=count[c];
    n=count[d];
    o=count[e];
    k=min(k,p);
    if(k<2)
        k=0;
    l=min(l,p);
    if(l<2)
        l=0;
    m=min(m,p);
    if(m<2)
        m=0;
    n=min(n,p);
    if(n<2)
        n=0;
    o=min(o,p);
    if(o<2)
        o=0;
    //cout<<sum<<endl;
    sum1=max(k*a,max(l*b,max(m*c,max(n*d,o*e))));
    //cout<<sum1<<endl;
    cout<<sum-sum1<<endl;


}
