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
ll row[100000+10];
ll col[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str[100000+10],scopy[100000+10];
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1;i<=n+1;i++)
        {
            row[i]=0;
        }
        for(i=0;i<m+1;i++)
        {
            col[i]=0;
        }
        for(i=1; i<=n; i++)
        {
            cin>>str[i];
        }
        for(i=1; i<=n; i++)
        {
            for(j=0; j<str[i].length(); j++)
            {
                if(str[i][j]=='*')
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        ll ans=INT_MAX;
        for(i=1; i<=n; i++)
        {
            for(j=0; j<str[i].length(); j++)
            {
                k=row[i]+col[j];
                if(str[i][j]=='*')
                    k--;
                ll p=n+m-k;
                p--;
                ans=min(ans,p);

            }
        }
        cout<<ans<<endl;
    }

    return 0;
}


