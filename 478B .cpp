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
    ll i,j,n,m,k,team,k1;
    cin>>n>>team;
    k=n/team;
    ll minans=0,maxans=0;
    if(n%team==0)
    {
        minans+=(k*(k-1))/2;
        minans*=team;
        n-=team;
        n++;
        maxans=n*(n-1)/2;
    }
    else
    {
        ll rem=n%team;
        ll a,b,c;
        ll ak,bk;
        ak=k+1;
        ak=(ak*(ak-1))/2;
        ak*=rem;
        k=(k*(k-1))/2;
        ll bad=team-rem;
        k*=bad;
        minans=ak+k;
        //cout<<ak<<" "<<k<<endl;
        n-=team;
        n++;
        maxans=n*(n-1)/2;

    }
    cout<<minans<<" "<<maxans<<endl;


    return 0;
}

