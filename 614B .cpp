///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str,ans="1";
    ll i,j,n,m,k,t;
    ll z=0;
    cin>>n;
    ll f=0;
    for(i=1; i<=n; i++)
    {
        cin>>str;
        ll c=0;
        k=0;
        if(str=="0")
            f=1;
        ll o=0;
        for(j=0; j<str.length(); j++)
        {
            if(str[j]=='0')
            {
                c++;
            }
            if(str[j]!='0'&&str[j]!='1')
            {
                k=1;
            }
            if(str[j]=='1')
                o++;
        }
        if(k||o>1)
        {
            ans=str;
        }
        else
            z+=c;
    }
    if(f)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<ans;
    for(i=0; i<z; i++)
    {
        cout<<0;
    }
    cout<<"\n";

    return 0;
}



