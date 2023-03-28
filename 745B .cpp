
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
    ll i,j,n,m,k,t,sr,ec,sc,er,c=0,a,b,d,e;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
            if(magic[i][j]=='X'&&c==0)
            {
                c++;
                sr=i;
                a=j;
            }
        }
    }
    for(i=m; i>=1; i--)
    {
        if(magic[sr][m]=='X')
        {
            b=m;
            break;
        }
    }
    for(i=n; i>=1; i--)
    {
        ll f=0;
        for(j=1; j<=m; j++)
        {
            if(magic[i][j]=='X')
            {
                er=i;
                d=j;
                f=1;
                break;
            }
        }
        if(f)
            break;
    }
    ll llc;
    for(i=m; i>=1; i--)
    {
        if(magic[er][i]=='X')
        {
            e=i;
            break;
        }
    }
    a=min(a,d);
    b=max(b,e);
    //cout<<sr<<" "<<er<<" "<<a<<" "<<b<<endl;
    for(i=sr;i<=er;i++)
    {
        for(j=a;j<=b;j++)
        {
            if(magic[i][j]=='.')
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    //cout<<sr<<" "<<er<<" "<<a<<" "<<b<<endl;
    cout<<"YES"<<endl;
    return 0;
}




