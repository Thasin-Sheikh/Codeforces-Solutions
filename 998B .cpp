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
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,price;
    cin>>n>>price;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    vector<ll>v;
    ll c=0;
    for(i=1; i<n; i++)
    {
        if(aarray[i]%2==0)
            c++;
        else c--;
        if(c==0)
            v.push_back(abs(aarray[i+1]-aarray[i]));
    }
    sort(v.rbegin(),v.rend());
    ll num=0,ans=0;
    while(!v.empty())
    {
        if(v.back()+num<=price)
        {
            ans++;
            num+=v.back();
        }
        else break;
        v.pop_back();
    }
    cout<<ans<<endl;



    return 0;
}


