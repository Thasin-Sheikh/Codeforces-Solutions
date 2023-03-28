///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m=0,k,t;
    cin>>n;
    cin>>str;
    string s;
    ll ans=0;
    ll len=str.length();
    for(i=0;i<str.length();i++)
    {
        s+=str[i];
        j=i+1;
        ll l=s.length();
        if(len>=2*l)
        {
            string ss=str.substr(j,l);
            if(ss==s)
            {
                m=max(m,ll(ss.length()));
            }
        }
    }
    //cout<<m<<endl;
    n-=2*m;
    ans+=m;
    ans+=n;
    if(m!=0)
        ans++;
    cout<<ans<<endl;

    return 0;
}



