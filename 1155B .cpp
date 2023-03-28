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
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>str;
    ll ans=0;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='8')
        {
            k=n-(i+1);
            k++;
            if(k>=11)
            {
                //cout<<i<<endl;
                ans++;
            }
        }
    }
    ll lk=n-11;
    lk/=2;
    //cout<<ans<<endl;
    //cout<<lk<<endl;
    if(ans>lk)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}


