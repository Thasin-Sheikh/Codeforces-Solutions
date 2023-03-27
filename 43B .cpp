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
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    string  c1,c2;
    ll c1s[30]= {0},c1b[30]= {0},c2s[30]= {0},c2b[30]= {0};
    getline(cin,c1);
    getline(cin,c2);
    for(i=0;i<c1.length();i++)
    {
        if(c1[i]>='A'&&c1[i]<='Z')
        {
            c1b[c1[i]-'A']++;
        }
        else if(c1[i]>='a'&&c1[i]<='z')
        {
            c1s[c1[i]-'a']++;
        }
    }
    for(i=0;i<c2.length();i++)
    {
        if(c2[i]>='A'&&c2[i]<='Z')
        {
            c2b[c2[i]-'A']++;
        }
        else if(c2[i]>='a'&&c2[i]<='z')
        {
            c2s[c2[i]-'a']++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(c1b[i]<c2b[i])
        {
            cout<<"NO"<<"\n";
            return 0;
        }
        if(c1s[i]<c2s[i])
        {
            cout<<"NO"<<"\n";
            return 0;
        }
    }
    cout<<"YES"<<"\n";
    return 0;
}

