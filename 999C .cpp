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
    ll i,j,n,m,l,k;
    ll value[26];
    ll flag[26];
    for(i=0; i<26; i++)
    {
        value[i]=0;
        flag[i]=0;
    }
    cin>>n>>k;
    cin>>str;
    if(k>=n)
    {
        return 0;
    }
    for(i=0; i<str.length(); i++)
    {
        value[str[i]-'a']++;
    }
    ll start=0;
    while(1)
    {
        flag[start]=min(value[start],k);
        k-=flag[start];
        start++;
        if(k==0)
        {
            break;
        }
    }
    for(i=0;i<str.length();i++)
    {
        if(flag[str[i]-'a'])
        {
            flag[str[i]-'a']--;
        }
        else
            cout<<str[i];
    }
    cout<<endl;


    return 0;
}


