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
vector<ll>v[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,p,c;
    vector<ll>a,b;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>k;
        a.push_back(k);
    }
    b=a;
    sort(b.begin(),b.end());
    for(i=0; i<n; i++)
    {
        mp[b[i]]=i;
    }
    ll ans=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==INT_MAX)
        {
            continue;
        }
        else if(a[i]==b[i])
        {
            v[i].push_back(i+1);
            ans++;
        }
        else
        {
            k=i;
            c=0;
            while(a[k]!=b[i])
            {
                v[i].push_back(k+1);
                ll p=k;
                k=mp[a[p]];
                a[p]=INT_MAX;
            }
            v[i].push_back(k+1);
            a[k]=INT_MAX;
            ans++;

        }
    }
    cout<<ans<<endl;
    for(i=0;i<n;i++)
    {
        if(v[i].size()==0)
        {
            continue;
        }
        cout<<v[i].size()<<" ";
        for(j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}


