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
vector<ll>v[30];
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,name;
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        v[str[i]-'a'].push_back(i+1);
    }
    cin>>t;
    while(t--)
    {
        cin>>name;
        ll cnt[30]={0};
        for(i=0;i<name.length();i++)
        {
            cnt[name[i]-'a']++;
        }
        ll ans=0;
        for(i=0;i<26;i++)
        {
            if(cnt[i])
            {
                ans=max(ans,v[i][cnt[i]-1]);
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}


