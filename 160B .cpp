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
    cin>>n;
    cin>>str;
    vector<ll>a,b;
    for(i=0; i<n; i++)
    {
        a.push_back(str[i]-'0');
    }
    for(i=n; i<2*n; i++)
    {
        b.push_back(str[i]-'0');
    }
    ll c1=0,c2=0,c3=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(i=0; i<a.size(); i++)
    {
        if(a[i]>b[i])
        {
            c1++;
        }
        else if(a[i]<b[i])
        {
            c2++;
        }
        else c3++;
    }
    if(c3)
    {
        cout<<"NO"<<"\n";
    }
    else if(c1==0||c2==0)
    {
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";
    return 0;
}

