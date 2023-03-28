/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    makefast__
    ll i,j,m,n;
    bool  number[100007];
    ll dp[100007];
    cin>>m;
    memset(number,false,sizeof(number));
    number[1]=true;
    number[0]=true;
    dp[0]=dp[1]=1;
    for(i=2;i<=10000;i++)
    {
         dp[i]=dp[i-2]+dp[i-1];
    }
    for(i=2;i<=10;i++)
        number[dp[i]]=true;
    ll cnt=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(number[i]==true&&number[j]==true&&(__gcd(i,j)==1)&&number[i+j]==true)
                cnt++;
        }
    }
    cout<<cnt<<endl;

}
