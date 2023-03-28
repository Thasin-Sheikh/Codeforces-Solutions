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
const long N = 5e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll Assum[N],Apsum[N],Bssum[N],Bpsum[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    cin>>str;
    ll ans=0;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='B')
        {
            ans+=aarray[i+1];

        }
    }
    if(str[0]=='A')
    {
        Assum[1]=aarray[1];
        Bssum[1]=0;
    }
    else
    {
        Bssum[1]=aarray[1];
        Assum[1]=0;
    }
    for(i=1;i<str.length();i++)
    {
        if(str[i]=='A')
        {
            Assum[i+1]=Assum[i]+aarray[i+1];
            Bssum[i+1]=Bssum[i];
        }
        else
        {
            Bssum[i+1]=Bssum[i]+aarray[i+1];
            Assum[i+1]=Assum[i];
        }
    }
    if(str[n-1]=='A')
    {
        Apsum[n]=aarray[n];
        Bpsum[n]=0;
    }
    else
    {
        Bpsum[n]=aarray[n];
        Apsum[n]=0;
    }
    for(i=n-2;i>=0;i--)
    {
        if(str[i]=='A')
        {
            Apsum[i+1]=Apsum[i+2]+aarray[i+1];
            Bpsum[i+1]=Bpsum[i+2];
        }
        else
        {
            Bpsum[i+1]=Bpsum[i+2]+aarray[i+1];
            Apsum[i+1]=Apsum[i+2];
        }
    }
    ll a,b,c=0,d=0;
    for(i=1;i<=n;i++)
    {
        b=Assum[i];
        b+=Bpsum[i+1];
        c=max(c,b);
    }
    for(i=n;i>=1;i--)
    {
        b=Apsum[i];
        b+=Bssum[i-1];
        d=max(d,b);
    }
    ans=max(ans,max(c,d));
    cout<<ans<<"\n";
    return 0;
}




