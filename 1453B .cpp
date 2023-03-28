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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,n,k,l,r,ans,sum=0;
    string str;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    if(n==2)
    {
        cout<<0<<"\n";
        return ;
    }
    for(i=2; i<=n; i++)
    {
        sum+=abs((aarray[i])-(aarray[i-1]));
    }
    ans=sum;
    //cout<<ans<<endl;
    for(i=1; i<=n; i++)
    {
        if(i==1)
        {

            k=sum-(abs((aarray[2])-(aarray[1])));
            ans=min(ans,k);
        }
        else if(i==n)
        {
            k=sum-abs((aarray[n])-(aarray[n-1]));
            ans=min(ans,k);
        }
        else
        {
            k=sum-abs((abs((aarray[i])-(aarray[i-1])))+abs((aarray[i+1])-(aarray[i])));
            k+=abs((aarray[i+1])-(aarray[i-1]));
            ans=min(ans,k);
            k=sum-abs(abs((aarray[i+1])-(aarray[i]))+abs((aarray[i])-(aarray[i-1])));
            k+=abs((aarray[i+1])-(aarray[i-1]));
            ans=min(ans,k);

        }
        //cout<<i<<" "<<ans<<endl;
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}

