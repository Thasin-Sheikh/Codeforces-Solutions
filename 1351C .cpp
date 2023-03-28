///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#include<tuple>
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
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        map<tuple<ll,ll,ll,ll>,ll>mp;
        ll a,b,x,y;
        cin>>str;
        a=b=x=y=0;
        ll ans=0;
        for(i=0; i<str.length(); i++)
        {
            a=x;
            b=y;
            if(str[i]=='N')
                x++;
            else if(str[i]=='S')
                x--;
            else if(str[i]=='W')
                y++;
            else y--;
            if(mp[{x,y,a,b}]==0&&mp[{a,b,x,y}]==0)
            {
                ans+=5;
            }
            else ans++;
            mp[{a,b,x,y}]++;
            mp[{x,y,a,b}]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}



