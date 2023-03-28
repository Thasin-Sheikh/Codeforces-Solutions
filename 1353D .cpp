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
void solve()
{
    ll i,j,n,m,k,l,r,mid;
    cin>>n;
    priority_queue<pair<ll,pair<ll,ll>>>pq;
    pq.push({n,{-1,-n}});
    ll res=1;
    while(!pq.empty())
    {
        l=-pq.top().second.first;
        r=-pq.top().second.second;
        pq.pop();
        mid=(l+r)/2;
        aarray[mid]=res;
        res++;
        if(l==r)
            continue;
        if(l<mid)
        {
            pq.push({mid-l,{-l,-(mid-1)}});
        }
        if(mid<r)
        {
            pq.push({r-mid,{-(mid+1),-r}});
        }
    }
    for(i=1;i<=n;i++)
        cout<<aarray[i]<<" ";
    cout<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


