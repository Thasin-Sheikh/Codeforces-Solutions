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
    ll i,j,n,m,k,t,x,y,c,z,o;
    ll ans=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1; i<=n; i++)
    {
        z=0,o=0;
        for(j=1; j<=i; j++)
        {
            if(aarray[j]==0)
            {
                z++;
            }
            else o++;
        }
        c=z;
        for(k=i+1; k<=n; k++)
        {
            if(aarray[k]==1)
            {
                c++;
            }
        }
        ans=max(ans,c);
        for(j=i+1; j<=n; j++)
        {
            if(aarray[j]==0)
            {
                z++;
            }
            else
            {
                o++;
            }
            if(aarray[j-i]==0)
            {
                z--;
            }
            else
                o--;
            c=0;
            for(k=1; k<=j-i; k++)
            {
                if(aarray[k]==1)
                {
                    c++;
                }
            }
            for(k=j+1; k<=n; k++)
            {
                if(aarray[k]==1)
                {
                    c++;
                }
            }
            c+=z;
            ans=max(ans,c);
        }
    }
    cout<<ans<<"\n";

    return 0;
}

