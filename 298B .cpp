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
    ll i,j,sx,sy,ex,ey,m,k,t,e=0,w=0,s=0,n=0;
    cin>>t;
    cin>>sx>>sy>>ex>>ey;
    cin>>str;
    if(ex>=sx)
    {
        e=ex-sx;
    }
    else
    {
        w=sx-ex;
    }
    if(ey>=sy)
    {
        n=ey-sy;
    }
    else
        s=sy-ey;
    for(i=0;i<t;i++)
    {
        if(str[i]=='S')
        {
            s--;
        }
        else if(str[i]=='N')
        {
            n--;
        }
        else if(str[i]=='W')
            w--;
        else e--;
        if(w<=0&&e<=0&&s<=0&&n<=0)
        {
            cout<<i+1<<"\n";
            return 0;
        }
    }
    cout<<-1<<"\n";
    return 0;
}

