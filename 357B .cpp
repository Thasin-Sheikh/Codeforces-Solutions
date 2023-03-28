///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    vector<ll>v;
    ll a,b,c;
    for(i=1; i<=m; i++)
    {
        cin>>a>>b>>c;
        if(mp[a]==0&&mp[b]==0&&mp[c]==0)
        {
            mp[a]=1,mp[b]=2,mp[c]=3;
        }
        else if(mp[b]==0&&mp[c]==0)
        {
            if(mp[a]==1)
            {
                mp[b]=2;
                mp[c]=3;
            }
            if(mp[a]==2)
            {
                mp[b]=1;
                mp[c]=3;
            }
            if(mp[a]==3)
            {
                mp[b]=2;
                mp[c]=1;
            }
        }
        else if(mp[a]==0&&mp[c]==0)
        {
            if(mp[b]==1)
            {
                mp[a]=2;
                mp[c]=3;
            }
            if(mp[b]==2)
            {
                mp[a]=1;
                mp[c]=3;
            }
            if(mp[b]==3)
            {
                mp[a]=2;
                mp[c]=1;
            }
        }
        else if(mp[a]==0&&mp[b]==0)
        {
            if(mp[c]==1)
            {
                mp[b]=2;
                mp[a]=3;
            }
            if(mp[c]==2)
            {
                mp[b]=1;
                mp[a]=3;
            }
            if(mp[c]==3)
            {
                mp[b]=2;
                mp[a]=1;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<mp[i]<<" ";
    }
    cout<<"\n";

    return 0;
}



