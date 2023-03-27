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
ll magic[111][111];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b;
    for(i=0;i<100;i++)
    {
        for(j=0;j<100;j++)
        {
            magic[i][j]=1;
        }
    }
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
        }
    }
    cin>>a>>b;
    ll p;
    ll ans=INT_MAX;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            ll c=0;
            ll num=a;
            ll row=i,col=i;
            while(num)
            {
                for(p=j;p<j+b;p++)
                {
                    if(magic[row][p]==1)
                        c++;
                }
                row++;
                num--;
            }

            num=b;
            //cout<<i<<" "<<j<<" "<<c<<endl;
            ans=min(ans,c);
            c=0;
            while(num)
            {
                for(p=j;p<j+a;p++)
                {
                    if(magic[col][p]==1)
                        c++;

                }
                num--;
                col++;
                //cout<<c<<" ";

            }
            //cout<<endl;
            //cout<<i<<" "<<j<<" "<<c<<endl;
            ans=min(ans,c);

        }
    }
    cout<<ans<<endl;
    return 0;
}


