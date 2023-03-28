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
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<string,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<string>v;
    cin>>n>>str;
    mp[str]++;
    v.push_back(str);
    while(1)
    {
        k=str.back()-'0';
        if(k==0)
        {
            string a,b;
            a+='0';
            a+=str.substr(0,n-1);
            str=a;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(str[i]=='9')
                {
                    str[i]='0';
                }
                else
                {
                    str[i]=((str[i]-'0')+1)+'0';
                }
            }
        }
        if(mp[str])
        {
            break;
        }
        else
        {
            mp[str]++;
            v.push_back(str);
        }
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
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


