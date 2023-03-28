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
    ll i,j,n,m,k,t;
    map<char,ll>mp;
    char ch;
    mp['a']=4;
    mp['b']=5;
    mp['c']=6;
    mp['f']=1;
    mp['e']=2;
    mp['d']=3;
    cin>>n;
    cin>>ch;
    n--;
    k=(n/4)*16;
    if(n%2)
        k+=7;
    cout<<k+mp[ch]<<endl;
    return 0;
}


