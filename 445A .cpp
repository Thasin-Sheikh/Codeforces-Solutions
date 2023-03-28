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
char magic[101][101];
vector<ll>primes;
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            cin>>magic[i][j];
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(i%2)
            {
                if(magic[i][j]=='.')
                {
                    if(j%2)
                    {
                        cout<<'B';
                    }
                    else cout<<'W';

                }
                else cout<<magic[i][j];
            }
            else
            {
                if(magic[i][j]=='.')
                {
                    if(j%2)
                    {
                        cout<<'W';
                    }
                    else cout<<'B';

                }
                else cout<<magic[i][j];

            }
        }
        cout<<endl;
    }

    return 0;
}


