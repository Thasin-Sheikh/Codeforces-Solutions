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
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
    }
    ll x=0;
    for(i=1;i<=n;i++)
    {
        if(mp[aarray[i]]>x)
        {
            x=mp[aarray[i]];
        }
    }
    ll val;
    for(i=1;i<=n;i++)
    {
        if(mp[aarray[i]]==x)
        {
            val=aarray[i];
            break;
        }
    }
    cout<<n-x<<endl;
    for(i=1;i<=n;i++)
    {
        if(aarray[i]==val)
        {
            for(j=i-1;j>=1;j--)
            {
                if(aarray[j]>val)
                {
                    cout<<2<<" "<<j<<" "<<j+1<<endl;
                }
                else if(aarray[j]<val)
                {
                    cout<<1<<" "<<j<<" "<<j+1<<endl;
                }
            }
            for(j=i+1;j<=n;j++)
            {
                if(aarray[j]>val)
                {
                    cout<<2<<" "<<j<<" "<<j-1<<endl;
                }
                else if(aarray[j]<val)
                {
                    cout<<1<<" "<<j<<" "<<j-1<<endl;
                }
            }
            break;
        }
    }

    return 0;
}


