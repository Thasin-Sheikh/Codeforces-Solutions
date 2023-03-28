
///*Bismillahir Rahmanir Rahim***///
///**Author thasin_sheikh**///
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
typedef tree<ll,null_type,less_equal<ll>,rb_tree_tag,tree_order_statistics_node_update>os;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
//bool check[1000001];
//ll large[10000005];
//int dx[] = {-1 , 0 , 1 , 0};
//int dy[] = {0 , 1 , 0 , -1};
/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
ll vis[N];
vector<ll>ed[N];
map<ll,ll>mp;
//priority_queue<ll>pq;// from max to min
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d,mi=maxval,ma=minval;
    string str;
    bool yes=true;
    cin>>n;
    vector<ll>wi,wn,in,iw,nw,ni;
    ll cnt[26];
    cnt[8]=0;
    cnt[13]=0;
    cnt[22]=0;
    //wn[22][13]=wn[22][8]=in[8][13]=in[8][22]=nw[13][22]=nw[13][8]=0;
    for(i=1; i<=n; i++)
    {
        cin>>str;
        cnt[8]=0;
        cnt[13]=0;
        cnt[22]=0;
        cnt[str[0]-'a']++;
        cnt[str[1]-'a']++;
        cnt[str[2]-'a']++;
        if(cnt[8]==2&&cnt[13]==0)
        {
            in.push_back(i);

        }
        if(cnt[8]==2&&cnt[22]==0)
        {
            iw.push_back(i);


        }
        if(cnt[13]==2&&cnt[8]==0)
        {
            ni.push_back(i);

        }
        if(cnt[13]==2&&cnt[22]==0)
        {

        }
        if(cnt[22]==2&&cnt[13]==0)
        {

        }
        if(cnt[22]==2&&cnt[8]==0)
        {

        }

    }

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //check test case in interactive , idiot
    //never use pow func directly
    //add and subtract

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



