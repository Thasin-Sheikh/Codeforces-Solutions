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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
ll mp[1000000+100];
ll cnt[1000000+100];
ll ac[1000000+100];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>k;
    ll ses=-1;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        if(aarray[i]==k)
        {
            ses=i;
        }
    }
    if(k==aarray[1])
    {
        cout<<-1<<"\n";
        return ;
    }
    set<pair<ll,ll>>s;
    if(mp[k]==0)
    {
        cout<<aarray[1]<<"\n";
        return ;
    }
    for(i=1; i<=1000000; i++)
    {
        mp[i]=0;
    }
    for(i=1; i<=ses; i++)
    {
        cnt[aarray[i]]++;
    }
    for(i=1; i<=ses; i++)
    {
        if(cnt[aarray[i]]>=cnt[k])
        {
            mp[aarray[i]]++;
        }
    }
    for(i=1; i<=ses; i++)
    {
        ac[aarray[i]]++;
        if(aarray[i]!=k&&mp[aarray[i]])
        {

            if(ac[k]&&ac[aarray[i]]<=ac[k])
            {
                mp[aarray[i]]=0;
                continue;
            }
            if(ac[aarray[i]]>=ac[k])
            {
                s.insert({ac[aarray[i]],aarray[i]});

            }
        }
        if(s.size()==0&&ac[k])
        {
            cout<<-1<<"\n";
            return ;
        }
        if(s.size())
        {
            auto it=s.end();
            it--;
            //cout<<i<<" "<<it->first<<" "<<it->second<<" "<<ac[k]<<endl;
            if(it->first<ac[k])
            {
                cout<<-1<<"\n";
                return ;
            }
        }
    }
    auto it=s.end();
    it--;
    cout<<it->second<<"\n";
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


