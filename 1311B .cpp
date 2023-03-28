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
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll sp[1000];
        for(i=1;i<=n;i++)
        {
            cin>>aarray[i];
        }
        for(i=1;i<=m;i++)
        {
            cin>>sp[i];
        }
        ll cn=100;
        while(cn--)
        {
            for(i=1;i<=m;i++)
            {
                if(aarray[sp[i]]>aarray[sp[i]+1])
                {
                    swap(aarray[sp[i]],aarray[sp[i]+1]);
                }
            }
        }
        ll f=1;
        for(i=2;i<=n;i++)
        {
            if(aarray[i]>=aarray[i-1])
            {
                continue;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}


