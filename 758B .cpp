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
map<char,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str,ss,s,ans;
    ll i,j,n,m,k,t;
    ss="RYBG";
    cin>>str;
    n=str.length();
    ll pc=INT_MAX;
    sort(ss.begin(),ss.end());
    do
    {
        string hu;
        hu=str;
        ll c=0;
        for(i=0; i<n; i++)
        {
            if(str[i]!=ss[i%4])
            {
                c++;
                hu[i]=ss[i%4];
            }
            else
                hu[i]=str[i];
        }
        if(c<pc)
        {
            ans=hu;
            pc=c;
        }
    }
    while(next_permutation(ss.begin(),ss.end()));
    for(i=0;i<n;i++)
    {
        if(ans[i]!=str[i])
        {
            mp[ans[i]]++;
        }
    }
    cout<<mp['R']<<" "<<mp['B']<<" "<<mp['Y']<<" "<<mp['G']<<"\n";
    return 0;
}




