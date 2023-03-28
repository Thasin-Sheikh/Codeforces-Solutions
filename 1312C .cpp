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
void solve()
{
    ll i,j,n,k,m;
    vector<ll>v;
    set<ll>s;
    cin>>n>>k;
    ll MaxNum=0;
    map<ll,ll>mp;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
    }
    for(i=1; i<=n; i++)
    {
        if(mp[aarray[i]]>1&&aarray[i]!=0)
        {
            cout<<"NO"<<endl;
            return ;
        }
    }
    for(i=1; i<=n; i++)
    {
        ll x=aarray[i];
        ll ps=0;
        while(x)
        {
            if(x%k!=0&&x%k!=1)
            {
                cout<<"NO"<<endl;
                return ;
            }
            if(x%k==1)
            {
                if(s.count(ps))
                {
                    cout<<"NO"<<endl;
                    return ;
                }
                s.insert(ps);
            }
            ps++;
            x/=k;

        }
    }
    cout<<"YES"<<endl;
}
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
        solve();
    }

    return 0;
}

