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
ll a[N],b[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
vector<pair<ll,ll>>v;
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>k;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end());
    multiset<ll>vv;
    ll totsum=0,sum;
    m=INT_MAX;
    k++;
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        if(k)
        {
            totsum+=it->second;
            mp[it->first]=totsum;
            vv.insert(it->second);
            k--;
        }
        else
        {
            totsum=totsum+it->second;
            auto jt=vv.begin();
            totsum-=(*jt);
            vv.erase(vv.find(*jt));
            mp[it->first]=totsum;
            vv.insert(it->second);
        }
    }
    for(i=1; i<=n; i++)
    {
        cout<<mp[a[i]]<<" ";
    }
    cout<<endl;


    return 0;
}



