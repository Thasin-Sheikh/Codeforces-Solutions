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
ll aarray[8010];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
void solve()
{
    ll i,j,n,m,k,ans=0,sum=0;
    ll cnt[8000+10]= {0};
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        cnt[aarray[i]]++;
    }
    sum+=aarray[1];
    for(i=2; i<=n; i++)
    {
        sum+=aarray[i];
        if(sum<=n)
        {
            if(cnt[sum])
            {
                ans+=cnt[sum];
                cnt[sum]=0;
            }
        }
        j=i+1;
        k=1;
        ll tt=sum;
        while(j<=n)
        {
            tt+=aarray[j];
            tt-=aarray[k];
            k++;
            j++;
            if(tt<=n)
            {
                if(cnt[tt])
                {
                    ans+=cnt[tt];
                    cnt[tt]=0;
                }
            }
        }
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

