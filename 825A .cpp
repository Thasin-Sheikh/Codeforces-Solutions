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
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,ans;
    ll i,j,n,m,k,t;
    cin>>n;
    cin>>str;
    vector<ll>v;
    ll z=0,o=0;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='0')
        {
            z++;
            if(o>=1)
            {
                ans+=o+'0';
                o=0;
            }
        }
        else if(str[i]=='1')
        {
            o++;
            //cout<<z<<endl;
            while(z>1)
            {
                ans+='0';
                z--;
            }
            z=0;
        }
        //cout<<i<<" "<<ans<<endl;
    }
    if(o>=1)
        ans+=o+'0';
    if(z>=1)
    {
        while(z--)
        {
            ans+='0';
        }

    }
    cout<<ans<<endl;
    return 0;
}


