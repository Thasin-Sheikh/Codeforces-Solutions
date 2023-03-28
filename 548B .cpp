///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
ll eye[1000];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,p,ans,c;
    cin>>n>>m>>t;
    for(i=1; i<=n; i++)
    {
        p=0;
        c=0;
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
        }
        for(j=1;j<=m+1;j++)
        {
            if(magic[i][j]==1)
            {
                c++;
            }
            else
            {
                p=max(p,c);
                c=0;
            }
        }
        eye[i]=p;
    }
    ll a,b;
    while(t--)
    {
        cin>>a>>b;
        magic[a][b]=!magic[a][b];
        p=0;
        c=0;
        for(i=1;i<=m+1;i++)
        {
            if(magic[a][i]==1)
            {
                c++;
            }
            else
            {
                p=max(p,c);
                c=0;
            }
        }
        eye[a]=p;
        ans=0;
        for(i=1;i<=n;i++)
        {
            if(eye[i]>ans)
            {
                ans=eye[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}



