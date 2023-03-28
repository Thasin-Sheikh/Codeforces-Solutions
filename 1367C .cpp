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
ll pre[200000+10];
ll suf[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cin>>str;
        memset(pre,-1,sizeof(pre));
        memset(suf,-1,sizeof(suf));
        if(str[0]=='1')
            pre[0]=0;
        if(str[n-1]=='1')
            suf[n-1]=n-1;
        if(n==1&&str[0]=='1')
        {
            cout<<0<<endl;
            continue;
        }
        if(n==1&&str[0]=='0')
        {
            cout<<1<<endl;
            continue;
        }
        for(i=1; i<str.length(); i++)
        {
            if(str[i]=='1')
                pre[i]=i;
            else
                pre[i]=pre[i-1];
        }
        for(i=str.length()-2; i>=0; i--)
        {
            if(str[i]=='1')
            {
                suf[i]=i;
            }
            else
            {
                suf[i]=suf[i+1];
            }
        }
        ll ans=0;
        ll v1,v2,mn;
        for(i=0; i<str.length(); i++)
        {
            v1=v2=INT_MAX;
            if(pre[i]!=-1)
                v1=i-pre[i];
            if(suf[i]!=-1)
                v2=suf[i]-i;
            mn=min(v1,v2);
            if(mn>k)
            {
                ans++;
                str[i]='1';
                pre[i]=i;
            }
            if(pre[i+1]<pre[i])
                pre[i+1]=pre[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}

