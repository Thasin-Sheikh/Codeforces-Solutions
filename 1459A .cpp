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
    string s1,s2;
    ll r=0,b=0,n,zr=0,zb=0,m,i,k,l,ans,sum=0;
    cin>>n;
    cin>>s1>>s2;
    for(i=0;i<n;i++)
    {
        if(s1[i]>s2[i])
        {
            r++;
        }
        else if(s1[i]<s2[i])
        {
            b++;
        }
    }
    if(r>b)
    {
        cout<<"RED"<<"\n";
    }
    else if(b>r)
    {
        cout<<"BLUE"<<"\n";
    }
    else cout<<"EQUAL"<<"\n";
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
