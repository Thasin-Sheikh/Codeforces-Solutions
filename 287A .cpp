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
char magic[R][R];
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
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=4; j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            ll x=0,y=0;
            if(magic[i][j]=='#')
            {
                x++;
            }
            else
                y++;
            if(magic[i+1][j]=='#')
            {
                x++;
            }
            else
                y++;
            if(magic[i][j+1]=='#')
            {
                x++;
            }
            else
                y++;
            if(magic[i+1][j+1]=='#')
            {
                x++;
            }
            else
                y++;
            if((x==1&&y==3)||(x==3&&y==1)||x==4||y==4)
            {
                cout<<"YES"<<"\n";
                return 0;
            }
        }
    }
    cout<<"NO"<<"\n";
    return 0;
}

