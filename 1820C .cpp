#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using ll=long long int;
ll aarray[200005];
#include<map>
ll mp[200005];
ll fi[200005],la[200005];
void solve()
{
    ll i,j,k,n,a;
    cin>>n;
    vector<ll>v;
    for(i=0;i<=n;i++)
    {
        mp[i]=fi[i]=la[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(aarray[i]<=n)
        {
            v.push_back(aarray[i]);
            mp[aarray[i]]++;
            if(mp[aarray[i]]==1)
            {
                fi[aarray[i]]=i;
                la[aarray[i]]=i;
            }
            else
            {
                la[aarray[i]]=i;
            }
        }
    }
    ll curmex=0;
    sort(v.begin(),v.end());
    for(i=0; i<v.size(); i++)
    {
        if(v[i]==curmex)
        {
            curmex++;
        }
    }
    ll newcurmex=curmex+1;
    if(curmex==n)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    if(mp[newcurmex]==0||curmex==0)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    ll l=la[newcurmex]-fi[newcurmex]+1;
    //cout<<l<<" "<<mp[newcurmex]<<"\n";
    if(mp[newcurmex]==l)
    {
        cout<<"YES"<<"\n";
        return ;
    }
    v.clear();
    for(i=1; i<=n; i++)
    {
        if(i<fi[newcurmex]||i>la[newcurmex])
        {
            v.push_back(aarray[i]);
        }
    }
    ll neww=0;
    sort(v.begin(),v.end());
    for(i=0; i<v.size(); i++)
    {
        if(v[i]==neww)
        {
            neww++;
        }

    }
    if(neww==curmex)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

}
int main()
{
    ll i,j,k,n,m,t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
