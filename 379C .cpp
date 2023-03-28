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
const int N = 3e5 + 10;
ll aarray[N];
ll a[N];
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
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]=aarray[i];
        a[i]=aarray[i];
    }
    sort(aarray,aarray+n+1);
    for(i=2;i<=n;i++)
    {
        if(aarray[i]<=aarray[i-1])
        {
            k=aarray[i-1]+1;
            mp[aarray[i]]=k;
            aarray[i]=k;
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<mp[a[i]]<<" ";
        mp[a[i]]--;
    }
    cout<<endl;

    return 0;
}



