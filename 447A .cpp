#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,array[100000+10],count[100000],q,sum1=0,cnt=0,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    memset(count,0,sizeof(count));
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>array[i];
    }
    for(i=1; i<=m; i++)
    {
        if(count[array[i]%n]==0)
        {
            l=array[i]%n;
            count[l]++;
        }
        else
        {
            ans=i;
            cout<<ans<<endl;
            return 0;
        }
        //cout<<count[l]<<" ";
    }
    cout<<-1<<endl;
}
