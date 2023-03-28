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
bool check[10001];
ll vis[N];
map<ll,ll>mp;
void seive()
{
    memset(check,true,sizeof(check));
    ll i,j,n,k;
    check[0]=check[1]=false;
    for(i=2;i<=1000;i++)
    {
        if(check[i])
        {
            for(j=2*i;j<=1000;j+=i)
                check[j]=false;
        }
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
    seive();
    vector<ll>a,ans;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(check[i])
        {
            a.push_back(i);
        }
    }
    for(i=0;i<a.size();i++)
    {
        ans.push_back(a[i]);
        ll num=a[i];
        for(j=2;;j++)
        {
            ll p=pow(num,j);
            if(p<=n)
            {
                ans.push_back(p);
            }
            else break;
        }

    }
    cout<<ans.size()<<"\n";
    for(auto c:ans)
    {
        cout<<c<<" ";
    }
    cout<<"\n";
    return 0;
}

