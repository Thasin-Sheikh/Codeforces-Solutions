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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<string,ll>mp,pos,apos;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str;
    bool yes=true;
    vector<string>v;
    mp.clear();
    pos.clear();
    apos.clear();
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>str;
        if(str.size()==1)
        {
            sum++;
        }
        v.push_back(str);
        mp[str]++;
        pos[str]=i;
        if(str.size()==3)
        {
            string ptr=str.substr(1,2);
            mp[ptr]++;
            apos[ptr]=i;
        }

    }
    if(sum)
    {
        cout<<"YES"<<endl;
        return ;
    }
    for(i=0;i<v.size();i++)
    {
        str=v[i];
        string rev;
        rev=str;
        reverse(rev.begin(),rev.end());
        if(str==rev)
        {
            cout<<"YES"<<endl;
            return ;
        }
        else if(mp[rev]&&pos[rev]>i+1)
        {
            cout<<"YES"<<"\n";
            return ;
        }
        if(str.size()==2&&mp[rev]&&pos[rev]>i+1)
        {
            cout<<"YES"<<endl;
            return ;

        }
        else if(str.size()==2&&mp[rev]&&apos[rev]>i+1)
        {
            cout<<"YES"<<endl;
            return ;

        }
        else if(str.size()==3)
        {
            rev=str.substr(0,2);
            reverse(rev.begin(),rev.end());
            if(mp[rev]&&pos[rev]>i+1)
            {
                cout<<"YES"<<endl;
                return ;
            }

        }
    }
    cout<<"NO"<<endl;
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

