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
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long MAXN=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
ll vis[N];
map<ll,ll>mp;
ll l[N],r[N];
ll ache[N],two[N];
void solve()
{
    ll i,j,k,m,n,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<pair<ll,ll>>v;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>l[i]>>r[i];
        aarray[l[i]]++;
        aarray[r[i]+1]--;
        v.push_back({l[i],r[i]});
    }
    sort(v.begin(),v.end());
    ans=0;
    for(i=1; i<=5001; i++)
    {
        aarray[i]+=aarray[i-1];
        if(aarray[i])
        {
            sum++;
        }
    }
    for(i=1; i<=5001; i++)
    {
        if(aarray[i]==1)
        {
            ache[i]=ache[i-1]+1;
        }
        else
        {
            ache[i]=ache[i-1];
        }
        if(aarray[i]==2)
            two[i]=1+two[i-1];
        else
            two[i]=two[i-1];
    }
    //cout<<ache[1]<<" "<<ache[0]<<endl;
    ll a,b,c,d;
    //cout<<sum<<endl;
    for(i=0; i<v.size(); i++)
    {
        for(j=i+1; j<v.size(); j++)
        {

            a=v[i].first;
            b=v[i].second;
            c=v[j].first;
            d=v[j].second;
            if(c<=b)
            {
                ll ex=ache[b]-ache[a-1];
                ex+=ache[d]-ache[c-1];
                a=max(a,c);
                b=min(b,d);
                ex+=two[b]-two[a-1];
                //cout<<i<<" "<<j<<" "<<ex<<endl;
                ll now=sum-ex;
                ans=max(ans,now);
                //cout<<i<<" "<<j<<" "<<now<<endl;

            }
            else
            {
                ll ex=ache[b]-ache[a-1]+ache[d]-ache[c-1];
                ll now=sum-ex;
                ans=max(ans,now);
                //cout<<i<<" "<<j<<" "<<now<<endl;
            }

        }
    }
    cout<<ans<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}


