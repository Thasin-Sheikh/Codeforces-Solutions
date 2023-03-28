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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>str;
    string s1(str.size(),'0');
    string s2(str.size(),'0');
    char ch='r';
    char ch1='b';
    for(i=0; i<str.size(); i++)
    {
        s1[i]=ch;
        s2[i]=ch1;
        if(ch=='r')
            ch='b';
        else ch='r';
        if(ch1=='r')
            ch1='b';
        else ch1='r';

    }
    ll x=0,y=0,z=0,zz=0;
    for(i=0; i<str.size(); i++)
    {
        if(str[i]!=s1[i])
        {
            if(str[i]=='b')
                x++;
            else y++;
        }
        if(str[i]!=s2[i])
        {
            if(str[i]=='b')
                z++;
            else zz++;
        }
    }
    ll ans=min(max(x,y),max(z,zz));
    cout<<ans<<endl;
}


