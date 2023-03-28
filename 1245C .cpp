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
bool ok[1000001];
ll dp[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>str;
    if(str.find('m')!=str.npos||str.find('w')!=str.npos)
    {
        cout<<0<<endl;
        return 0;
    }
    dp[0]=dp[1]=1;
    for(i=1;i<str.length();i++)
    {
        dp[i]=dp[i-1];
        if(str[i]==str[i-1]&&(str[i]=='u'||str[i]=='n'))
        {
            dp[i]=(dp[i]+dp[i-2])%MOD;
            if(i==1)
                dp[i]=(dp[i]+1)%MOD;
        }
    }
    cout<<dp[str.length()-1]<<endl;
    return 0;
}


