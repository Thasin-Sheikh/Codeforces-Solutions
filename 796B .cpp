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
    ll i,j,n,m,k,t,ans=1,cup,hole,sp;
    cin>>cup>>hole>>sp;
    ll a;
    set<ll>sl;
    for(i=0;i<hole;i++)
    {
        cin>>a;
        sl.insert(a);
    }
    ll b;
    if(sl.find(1LL)!=sl.end())
    {
        cout<<1<<endl;
        return 0;
    }
    for(i=1;i<=sp;i++)
    {
        cin>>a>>b;
        if(a==ans)
        {
            if(sl.find(b)!=sl.end())
            {
                cout<<b<<endl;
                return 0;
            }
            ans=b;
        }
        else if(b==ans)
        {
            if(sl.find(a)!=sl.end())
            {
                cout<<a<<endl;
                return 0;
            }
            ans=a;
        }
    }
    cout<<ans<<endl;
    return 0;
}


