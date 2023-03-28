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
    ll i,j,m,n;
    cin>>n>>m;
    if(m==1)
    {
        cout<<n<<endl;
        return ;
    }
    ll k,mi=INT_MAX,ma=INT_MIN;
    ll c=0;
    vector<ll>v;
    v.push_back(n);
    c=1;
    while(mi>0)
    {
        mi=INT_MAX,ma=INT_MIN;
        ll k=n;
        while(k)
        {
            ll rem=k%10;
            if(rem<mi)
                mi=rem;
            if(rem>ma)
                ma=rem;
            k/=10;
        }
        n+=mi*ma;
        v.push_back(n);
        c++;
        if(c==m)
            break;
    }
    k=v.size();
    ll in=min(m,k);
    cout<<v[in-1]<<endl;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,k,t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


