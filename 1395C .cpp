///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>v[210];
bool prime[1000001];
ll a[210],b[210];
ll n;
ll ans(ll x)
{
    ll c=0;
    ll i,j;
    for(i=1; i<=n; i++)
    {
        ll f=0;
        for(j=0; j<v[i].size(); j++)
        {
            if(v[i][j]|x==x)
            {
                c++;
                f=1;
                break;
            }
        }
    }
    return c;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=m; i++)
    {
        cin>>b[i];
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            k=a[i]&b[j];
            v[i].push_back(k);
        }
    }
    for(ll in=0; in<512; in++)
    {
        ll c=0;
        for(i=1; i<=n; i++)
        {
            for(j=0; j<v[i].size(); j++)
            {
                if((v[i][j]|in)==in)
                {
                    c++;
                    break;
                }
                //cout<<c<<" ";
            }
        }
        //cout<<c<<" ";
        if(c==n)
        {
            cout<<in<<endl;
            return 0;
        }
    }

    return 0;
}


