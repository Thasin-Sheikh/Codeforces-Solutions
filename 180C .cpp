///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
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
ll up[N],lo[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>str;
    ll l=0,u=0;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            u++;
            up[i+1]=up[i]+1;
            lo[i+1]=lo[i];
        }
        else
        {
            lo[i+1]=lo[i]+1;
            up[i+1]=up[i];
            l++;

        }
    }
    ll ans=INT_MAX;
    //cout<<ans<<endl;
    ans=min(l,u);
    ll len=str.length();
    for(i=1; i<=len; i++)
    {
        ll low=lo[i];
        ll high=abs(up[len]-up[i]);
        //cout<<low<<" "<<high<<endl;
        ans=min(ans,low+high);
    }
    cout<<ans<<endl;

    return 0;
}



