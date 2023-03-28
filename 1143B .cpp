
///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
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
    makefast__
    string str;
    ll a,b=1,c,d,e,f,x,y,k,t,L=1,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>str;
    if(str.length()==1)
    {
        cout<<str<<endl;
        return 0;
    }
    for(i=0;i<str.length();i++)
    {
        L*=str[i]-'0';
    }
    //cout<<ans<<endl;
    for(i=0; i<str.length(); i++)
    {
        ll A=1,B=1;
        for(j=0; j<i; j++)
        {
            A*=str[j]-'0';
        }
        for(j=i+1; j<str.length(); j++)
        {
            B*=9;
        }
        ll tot=A*B;
        tot*=max(1,str[i]-'0'-1);
        cout<<tot<<endl;
        ans=max(tot,ans);
    }
    //cout<<max(L,ans)<<endl;

    return 0;
}
