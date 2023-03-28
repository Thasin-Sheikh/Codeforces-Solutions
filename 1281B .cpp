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
map<char,ll>mp;
set<ll>s[30];
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str,a,b;
    bool yes=true;
    vector<ll>v;
    cin>>a>>b;
    for(i=0; i<26; i++)
    {
        s[i].clear();
    }
    for(i=0; i<a.size(); i++)
    {
        s[a[i]-'A'].insert(i);

    }
    if(a<b)
    {
        cout<<a<<"\n";
        return ;
    }
    for(i=0; i<min(ll(a.size()),ll(b.size())); i++)
    {
        if(a[i]>=b[i]&&a[i]!='A')
        {
            //cout<<c<<endl;
            for(char c='A';c<=b[i]; c++)
            {
                if(s[c-'A'].size()==0)
                {
                    continue;
                }
                auto p=s[c-'A'].end();
                p--;
                //cout<<(*p)<<endl;
                if(*p>i)
                {

                    swap(a[(*p)],a[i]);
                    if(a<b)
                    {
                        cout<<a<<"\n";
                        return ;
                    }
                    swap(a[*p],a[i]);
                }
            }
        }
    }
    cout<<"---"<<"\n";
    return ;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        solve();
    }

    return 0;
}


