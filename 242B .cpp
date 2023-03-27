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
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    vector<pair<ll,ll>>v,v1;
    cin>>n;
    ll mi=INT_MAX,ma=INT_MIN;
    for(i=1;i<=n;i++)
    {
        cin>>m>>k;
        v.push_back(make_pair(m,k));
        mi=min(mi,m);
        ma=max(ma,k);
    }
    v1=v;
    sort(v.begin(),v.end());
    auto it=v.begin();
    ll s,e;
    s=it->first;
    e=it->second;
    for(auto it=v.begin();it!=v.end();it++)
    {
        if(it->first==s)
        {
            e=max(it->second,e);
        }
    }
    if(s>mi||e<ma)
    {
        cout<<-1<<endl;
        return 0;
    }
    ll c=0;
    for(auto it=v1.begin();it!=v1.end();it++)
    {
        if(it->first==s&&it->second==e)
        {
            c++;
            cout<<c<<endl;
            return 0;
        }
        c++;

    }
    return 0;
}


