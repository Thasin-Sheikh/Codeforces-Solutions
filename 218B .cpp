///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,p,k,t;
    cin>>p>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    sort(aarray+1,aarray+n+1);
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        v.push_back(aarray[i]);
    }
    ll mi=0,ma=0;
    ll a;
    a=p;
    for(i=1;i<=n;i++)
    {
        if(aarray[i]<=p)
        {
            p-=aarray[i];
            mi+=(aarray[i]*(aarray[i]+1))/2;
        }
        else
        {
            while(p)
            {
                mi+=aarray[i];
                aarray[i]--;
                p--;
            }
            break;
        }
    }
    p=a;
    while(p)
    {
        ma+=v.back();
        p--;
        v.back()-=1;
        sort(v.begin(),v.end());
    }
    cout<<ma<<" "<<mi<<"\n";

    return 0;
}

