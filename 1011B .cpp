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
ll cnt[100000];
ll nn;
bool func(ll n)
{
    ll i,j,m,cc=0;
    for(i=1; i<=100; i++)
    {
        m=cnt[i];
        if(m>=n)
        {
            cc+=m/n;

        }
        else continue;
    }
    //cout<<cc<<" "<<n<<endl;
    if(cc>=nn)
        return true;
    return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,m,k,t;
    cin>>nn>>t;
    for(i=1; i<=1000; i++)
        cnt[i]=0;
    for(i=1; i<=t; i++)
    {
        cin>>aarray[i];
        cnt[aarray[i]]++;
    }
    if(t<nn)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=1; i<=100; i++)
    {
        if(!func(i))
        {
            break;
        }
        else continue;
    }
    cout<<i-1<<endl;

    return 0;
}


