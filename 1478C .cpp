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
using ll=long long int ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l=0,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=2*n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
        if(mp[aarray[i]]==1)
        {
            v.push_back(aarray[i]);
        }
        if(aarray[i]%2)
        {
            l++;
        }
    }
    if(l)
    {
        cout<<"NO"<<"\n";
        return ;
    }
    for(i=1;i<=2*n;i++)
    {
        if(mp[aarray[i]]%2||mp[aarray[i]]>2)
        {
            cout<<"NO"<<"\n";
            return ;
        }
    }
    sort(v.begin(),v.end());
    for(i=v.size()-1;i>=0;i--)
    {
        v[i]-=sum;
        if(v[i]>0&&(v[i]%(2*(i+1)))==0)
        {
            sum+=v[i]/((i+1));
        }
        else
        {
            yes=false;
            break;
        }
    }
    if(yes)
    {
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        solve();
    }
    return 0;
}

