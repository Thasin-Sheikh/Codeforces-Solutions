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
vector<string>v[1000];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str="polycarp",s1,s2,s3;
    ll i,j,n,m,k,t;
    cin>>n;
    set<string>ss;
    ll c=0,ans=1;
    map<string,ll>mp;
    mp[str]=1;
    for(i=1; i<=n; i++)
    {
        cin>>s1>>s2>>s3;
        std::for_each(s1.begin(),s1.end(),[](char & c)
        {
            c=::tolower(c);
        });
        std::for_each(s3.begin(),s3.end(),[](char & c)
        {
            c=::tolower(c);
        });
        k=mp[s3]+1;
        //cout<<k<<endl;
        if(k>ans)
            ans=k;
        mp[s1]=k;

    }
    cout<<ans<<endl;

    return 0;
}


