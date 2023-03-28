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
    string str;
    ll i,j,n,m,k,t,l,r,p1,p2,p3;
    cin>>str;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>k;
        l--;
        r--;
        string ans;
        ll len=r-l+1;
        k%=len;
        p1=r-k+1;
        for(j=0;j<l;j++)
            ans+=str[j];
        ans+=str.substr(p1,k);
        ans+=str.substr(l,p1-l);
        ans+=str.substr(r+1,str.length()-ans.length());
        str=ans;

    }
    cout<<str<<endl;

    return 0;
}


