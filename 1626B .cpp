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
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0,a,b,c,d;
    string str,s;
    bool yes=true;
    vector<ll>v;
    cin>>str;
    n=str.size();
    ll psum=0;
    ll f=0;
    for(i=0;i<n-1;i++)
    {
        sum=(str[i]-'0')+(str[i+1]-'0');
        if(sum>psum)
            psum=sum;

    }
    for(i=0; i<n-1; i++)
    {
        sum=(str[i]-'0')+(str[i+1]-'0');
        l=str[i]-'0';
        if(((sum/10==0)&&sum>l))
        {

            l=sum%10;
            sum/=10;
            if(sum)
            {
                s+=((sum%10)+'0');

            }
            s+=(l+'0');
            for(j=i+2; j<n; j++)
            {
                s+=str[j];
            }
            break;
        }
        else
        {
            s+=str[i];
        }
    }
    string sq;
    //cout<<psum<<endl;
    for(i=n-1; i>0; i--)
    {
        sum=(str[i]-'0')+(str[i-1]-'0');
        if(sum>=10)
        {
            //cout<<i<<endl;
            for(j=0; j<i-1; j++)
            {
                sq+=str[j];
            }
            l=sum%10;
            sum/=10;
            if(sum)
            {
                sq+=((sum%10)+'0');

            }
            sq+=(l+'0');
            for(j=i+1;j<n;j++)
            {
                sq+=str[j];
            }
            break;
        }
    }
    //cout<<sq<<" "<<s<<endl;
    if(sq.size()>s.size())
    {
        cout<<sq<<"\n";
    }
    else if(sq>s)
    cout<<sq<<"\n";
    else cout<<s<<"\n";
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

