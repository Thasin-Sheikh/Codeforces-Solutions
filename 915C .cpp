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
int aarray[N];
int magic[R][R];
vector<ll>primes;
bool check[1000001];
int large[10000005];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    string a,b;
    cin>>a>>b;
    if(a.size()<b.size())
    {
        sort(a.begin(),a.end());
        for(i=a.size()-1; i>=0; i--)
        {
            cout<<a[i];
        }
        cout<<"\n";
        return ;
    }
    for(i=0; i<a.size(); i++)
    {
        mp[a[i]-'0']++;
    }

    for(i=0; i<b.size(); i++)
    {
        if(mp[b[i]-'0'])
        {
            str+=b[i];
            mp[b[i]-'0']--;
        }
        else
        {
            ll c=0;
            for(j=(b[i]-'0'); j>=0; j--)
            {
                if(mp[j])
                {
                    str+=j+'0';
                    mp[j]--;
                    c=1;
                    break;
                }
            }
            if(!c)
            {
                while(1)
                {
                    mp[str[str.size()-1]-'0']++;
                    ll vl=str[str.size()-1]-'0';
                    str.pop_back();
                    ll f=0;
                    for(j=vl-1; j>=0; j--)
                    {
                        //cout<<j<<endl;
                        if(mp[j])
                        {
                            str+=(j+'0');
                            mp[j]--;
                            f=1;
                            break;
                        }
                    }
                    if(f)
                    {
                        break;
                    }
                }
            }
            break;
        }
    }
    //cout<<1<<endl;
    for(i=0; i<=9; i++)
    {
        //cout<<i<<endl;
        while(mp[i]>0)
        {
            //cout<<1<<endl;
            v.push_back(i);
            mp[i]--;
        }
    }
    // cout<<1<<endl;
    sort(v.rbegin(),v.rend());
    cout<<str;
    //cout<<1<<endl;
    for(i=0; i<v.size(); i++)
    {
        cout<<v[i];
    }
    cout<<"\n";
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


