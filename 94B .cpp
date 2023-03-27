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
ll vis[100];
vector<ll>v[100];
ll k=0;
map<ll,ll>mp,pp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m=0,t,a[10],b[10];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
        v[a[i]].push_back(b[i]);
        v[b[i]].push_back(a[i]);
        mp[a[i]]++;
        mp[b[i]]++;
    }
    if(n==0)
    {
        cout<<"WIN"<<"\n";
        return 0;
    }
    for(i=1; i<=n; i++)
    {
        k=a[i];
        for(j=0; j<v[k].size(); j++)
        {
            ll p,q;
            p=v[k][j];
            if(p==k)
                continue;
            for(ll in=0; in<v[p].size(); in++)
            {
                q=v[p][in];
                if(q==p)
                {
                    continue;
                }
                for(ll po=0; po<v[q].size(); po++)
                {
                    if(v[q][po]==k)
                    {
                        cout<<"WIN"<<"\n";
                        return 0;
                    }
                }
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        k=a[i];
        ll cnt[10],cc[10],ccc[10];
        for(j=1; j<=5; j++)
        {
            cnt[j]=0;
            cc[j]=0;
            ccc[j]=0;

        }
        cnt[k]=1;
        for(j=0; j<v[k].size(); j++)
        {
            ll p=v[k][j];
            cnt[p]=1;
        }
        for(j=1; j<=5; j++)
        {
            if(cnt[j]==0)
            {
                for(ll kj=1; kj<=5; kj++)
                {
                    cc[kj]=0;

                }
                for(ll in=0; in<v[j].size(); in++)
                {
                    cc[v[j][in]]=1;
                }
                cc[j]=1;
                for(ll in=1; in<=5; in++)
                {
                    if(in!=k&&cc[in]==0&&cnt[in]==0&&in!=j)
                    {
                        //cout<<i<<" "<<j<<endl;
                        cout<<"WIN"<<"\n";
                        return 0;
                    }
                }

            }
        }
    }
    cout<<"FAIL"<<"\n";
    return 0;
}



