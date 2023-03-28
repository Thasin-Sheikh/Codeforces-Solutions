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
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,in;
    ll i,j,n,m=0,k,t,p=0,ans=0;
    cin>>n;
    char ch[1000];
    for(i=1;i<=n;i++)
    {
        cin>>ch[i]>>k;
        if(ch[i]=='-')
        {
            if(!mp[k])
            {
                p++;
            }
        }
        mp[k]++;
    }
    ans=p;
    for(i=1;i<=n;i++)
    {
        if(ch[i]=='+')
            p++;
        else
            p--;
        ans=max(ans,p);
    }
    cout<<ans<<endl;

    return 0;
}


