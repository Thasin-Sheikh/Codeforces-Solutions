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
ll buy[15][110],sell[15][110],item[15][110];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,ii;
    cin>>n>>m>>k;
    ll ans=0;
    for(i=1; i<=n; i++)
    {
        cin>>str;
        for(j=1; j<=m; j++)
        {
            cin>>buy[i][j]>>sell[i][j]>>item[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            vector<ll>v;
            if(i!=j)
            {
                for(ii=1; ii<=m; ii++)
                {
                    if(buy[i][ii]<=sell[j][ii])
                    {
                        ll num=item[i][ii];
                        while(num)
                        {
                            ll dif=sell[j][ii]-buy[i][ii];
                            v.push_back(dif);
                            num--;
                        }
                    }
                }
                sort(v.rbegin(),v.rend());
                ll sum=0;
                ll mn=min(k,ll(v.size()));
                for(ll p=0; p<mn; p++)
                    sum+=v[p];
                ans=max(ans,sum);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}


