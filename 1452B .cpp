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
        cin>>n;
        ll sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>aarray[i];
            sum+=aarray[i];
        }
        sort(aarray+1,aarray+n+1);
        k=n-1;
        ll p=sum/k;
        if(sum%k)
        {
            p++;
        }
        //cout<<p<<endl;
        if(p>=aarray[n])
        {
            cout<<k*p-sum<<"\n";
            continue;
        }
        p=k*aarray[n];
        cout<<p-sum<<"\n";
    }

    return 0;
}

