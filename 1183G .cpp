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
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
map<ll,ll>mp;
ll type[200000+10];
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
        cin>>n;
        ll a,ans=0,b;
        vector<ll>v;
        priority_queue<pair<ll,ll>>pp;
        for(i=1; i<=n; i++)
        {
            cin>>aarray[i]>>type[i];
            mp[aarray[i]]++;
        }
        k=v[0];
        ans+=k;
        for(i=1; i<v.size(); i++)
        {
            if(v[i]>=k)
            {
                k--;
                ans+=k;
            }
            else
            {
                ans+=v[i];
                k=v[i];
            }
            if(k==0)
            {
                break;

            }
        }
        cout<<ans<<endl;
        mp.clear();
    }
    return 0;
}
