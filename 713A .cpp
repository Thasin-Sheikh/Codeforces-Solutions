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
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,p;
    cin>>t;
    char ch;
    while(t--)
    {
        cin>>ch;
        cin>>str;
        k=0;
        for(i=0;i<str.length();i++)
        {
            k=k*2+(str[i]-'0')%2;
        }
        if(ch=='-')
        {
            mp[k]--;
        }
        else if(ch=='+')
        {
            mp[k]++;

        }
        else cout<<mp[k]<<endl;

    }

    return 0;
}



