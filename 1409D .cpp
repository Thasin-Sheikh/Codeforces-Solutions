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
void solve()
{
    ll i,j,ans=0,n;
    string str;
    cin>>str>>n;
    ll sum=0;
    for(i=0; i<str.length(); i++)
    {
        sum+=str[i]-'0';
    }
    if(sum<=n)
    {
        cout<<0<<endl;
        return;
    }
    ll p=1;
    ans=0;
    for(i=str.length()-1; i>=0; i--)
    {
        if(str[i]-'0'>0)
        {
            ll num1,num2;
            num1=str[i]-'0';
            ans+=p*(10-num1);
            str[i]='0';
            if(i>0)
            {
                char ch=str[i-1];
                ll  k=str[i-1]-'0'+1;
                str[i-1]=k+'0';
            }
        }
        sum=0;
        //cout<<ans<<endl;
        //cout<<str<<endl;
        for(j=0; j<str.length(); j++)
        {
            sum+=str[j]-'0';
        }
        if(sum<=n)
        {
            cout<<ans<<endl;
            return;
        }
        p*=10;
    }
    return ;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    //string str;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


