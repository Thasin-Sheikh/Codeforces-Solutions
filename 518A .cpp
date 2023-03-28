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
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,p,ans,sum=0;
    string str,s,t;
    bool yes=true;
    vector<ll>v;
    cin>>s>>t;
    n=s.size();
    for(i=0;i<n;i++)
    {
        l=s[i]-'a';
        r=t[i]-'a';
        if(r-l>=2)
        {
            for(j=0;j<i;j++)
            {
                str+=s[j];
            }
            char ch=s[i];
            ch++;
            str+=ch;
            for(j=i+1;j<n;j++)
            {
                str+=s[j];
            }
            cout<<str<<"\n";
            return ;
        }
    }
    for(i=0;i<n;i++)
    {
        if(t[i]>s[i])
        {
            if(i==n-1)
            {
                cout<<"No such string"<<"\n";
                return ;
            }
            str.clear();
            for(j=0;j<i;j++)
            {
                str+=t[j];

            }
            str+=s[i];
            for(j=i+1;j<n;j++)
            {
                if(s[j]!='z')
                {
                    str+='z';
                    for(k=j+1;k<n;k++)
                    {
                        str+=s[k];
                    }
                    cout<<str<<"\n";
                    return ;
                }
                else
                    str+=s[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(t[i]>s[i])
        {
            if(i==n-1)
            {
                cout<<"No such string"<<"\n";
                return ;
            }
            str.clear();
            for(j=0;j<i;j++)
            {
                str+=s[j];

            }
            str+=t[i];
            ll ca=0;
            for(j=i+1;j<n;j++)
            {
                if(t[j]!='a')
                {
                    ca++;
                }
                str+='a';
            }
            if(ca)
            {
                cout<<str<<"\n";
                return ;
            }
        }
    }

    cout<<"No such string"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    //no test case in interactive ,check it idiot
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }

    return 0;
}

