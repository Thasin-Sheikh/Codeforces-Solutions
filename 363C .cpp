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
    string str,ans;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        ll flag=1;
        ll len=ans.size();
        if(len>1&&ans[len-1]==ans[len-2]&&ans[len-1]==str[i])
            flag=0;
        if(ans.size()>2&&ans[len-1]==str[i]&&ans[len-2]==ans[len-3])
            flag=0;
        if(flag)
            ans.push_back(str[i]);
    }
    cout<<ans<<endl;
}
