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
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b,c;
    cin>>a>>b>>c;
    mp[a]++,mp[b]++,mp[c]++;
    if(mp[2]>=2||mp[1]>=1)
    {
        cout<<"YES"<<"\n";
    }
    else if(mp[3]==3)
    {
        cout<<"YES"<<"\n";
    }
    else if(mp[2]==1&&mp[4]==2)
    {
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";

    return 0;
}



