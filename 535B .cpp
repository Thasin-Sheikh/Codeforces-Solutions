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
const ll N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>v;
bool ok[1000001];
void create(ll n)
{
    if(n>1000000000)
        return ;
    ll a,b;
    a=n*10+4;
    b=n*10+7;
    v.push_back(a);
    v.push_back(b);
    create(a);
    create(b);
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    create(0);
    cin>>n;
    sort(v.begin(),v.end());
    t=lower_bound(v.begin(),v.end(),n)-v.begin();
    cout<<t+1<<endl;

    return 0;
}



