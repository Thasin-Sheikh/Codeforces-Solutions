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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,op,k,t,a,p,b;
    cin>>n>>op;
    ll a1=INT_MIN,a2=INT_MAX;
    p=op;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        a1=max(a1,aarray[i]);
        a2=min(a2,aarray[i]);
    }
    vector<pair<ll,ll>>v;
    while(op)
    {
        a=INT_MAX,b=INT_MIN;
        ll f1,f2;
        for(i=1; i<=n; i++)
        {
            if(aarray[i]<a)
            {
                a=aarray[i];
                f1=i;
            }
            if(aarray[i]>b)
            {
                b=aarray[i];
                f2=i;
            }
        }
        aarray[f2]--;
        aarray[f1]++;
        if(f2!=f1)
        v.push_back({f2,f1});
        op--;
    }
    a=INT_MIN,b=INT_MAX;
    for(i=1;i<=n;i++)
    {
        a=max(a,aarray[i]);
        b=min(b,aarray[i]);
    }
    if(a-b==a1-a2)
    {
        cout<<a-b<<" "<<0<<endl;
        return 0;
    }
    cout<<a-b<<" "<<v.size()<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;

}

