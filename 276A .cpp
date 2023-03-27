#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int   a,b,c,time,d,m,n,p,t,k=INT_MIN,array[100000+10],q,sum1=0,cnt,sum=0,ans=INT_MIN,an=INT_MIN,f,l;
    long long int ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000],st;
    set<pair<long long int,long long int>>vecs;
    vector<pair<long long int,long long int>>vi;
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        vi.push_back(make_pair(a,b));
        if(b>m)
        {
            p=a-(b-m);
            k=max(k,p);
        }
    }
    for(auto it=vi.begin(); it!=vi.end(); it++)
    {
        if(it->second<=m)
        {
            ans=max(ans,it->first);
        }
    }
    //cout<<k<<endl;
    cout<<max(ans,k)<<endl;
}
