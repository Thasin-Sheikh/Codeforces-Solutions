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
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>pre;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    pre.push_back(1);
    cout<<1<<"\n";
    for(i=2; i<=n; i++)
    {
        if(aarray[i]==1)
        {
            pre.push_back(1);
        }
        else
        {
            k=pre.back()+1;
            if(aarray[i]==k)
            {
                pre.pop_back();
                pre.push_back(aarray[i]);
            }
            else
            {
                vector<ll>a;
                for(j=pre.size()-1; j>=0; j--)
                {
                    if(pre[j]+1==aarray[i])
                    {
                        for(l=0;l<j;l++)
                        {
                            a.push_back(pre[l]);
                        }
                        a.push_back(aarray[i]);
                        break;
                    }
                }
                pre.clear();
                pre=a;
            }
        }
        for(j=0;j<pre.size();j++)
        {
            //cout<<i<<endl;
            if(j>0)
            {
                cout<<"."<<pre[j];
            }
            else
            {
                cout<<pre[j];
            }
        }
        cout<<"\n";
    }
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
        solve();
    }
    return 0;
}
