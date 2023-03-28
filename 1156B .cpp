///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<class T> using myset=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
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
const long maxn=5e5+10;
const long long  maxval=1e18;
const long long minval=-1e18;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str,ptr;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    n=str.size();
    sort(str.begin(),str.end());
    ll cnt[30];
    for(i=0; i<26; i++)
    {
        cnt[i]=0;
    }
    for(i=0; i<n; i++)
    {
        cnt[str[i]-'a']++;
    }
    for(char ch='a'; ch<='z'; ch+=2)
    {
        if(cnt[ch-'a'])
        {
            l=cnt[ch-'a'];
            while(l--)
            {
                ptr+=ch;
            }
        }
    }
    string aa;
    for(char ch='b'; ch<='z'; ch+=2)
    {
        if(cnt[ch-'a'])
        {
            a=ptr.back()-'a';
            b=ch-'a';
            if(a+1!=b&&b+1!=a)
            {

                l=cnt[ch-'a'];
                while(l--)
                {
                    ptr+=ch;
                }
                cnt[ch-'a']=0;
                sum++;
                break;
            }
        }
    }
    if(sum==0)
    {
        reverse(ptr.begin(),ptr.end());
        for(char ch='b'; ch<='z'; ch+=2)
        {
            if(cnt[ch-'a'])
            {
                a=ptr.back()-'a';
                b=ch-'a';
                if(a+1!=b&&b+1!=a)
                {

                    l=cnt[ch-'a'];
                    while(l--)
                    {
                        ptr+=ch;
                    }
                    cnt[ch-'a']=0;
                    sum++;
                    break;
                }
            }
        }
    }
    for(char ch='b'; ch<='z'; ch+=2)
    {
        if(cnt[ch-'a'])
        {


            l=cnt[ch-'a'];
            while(l--)
            {
                ptr+=ch;
            }
        }

    }
    for(i=0; i<n-1; i++)
    {
        a=ptr[i]-'a';
        b=ptr[i+1]-'a';
        if(a+1==b||b+1==a)
        {
            cout<<"No answer"<<"\n";
            return ;
        }
    }
    if(ptr.size()!=n)
    {
        cout<<"No answer"<<"\n";
        return ;

    }
    cout<<ptr<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    //never use pow func directly
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

