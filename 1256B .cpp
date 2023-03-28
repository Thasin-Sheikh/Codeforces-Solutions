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
    string str;
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll start;
        ll vis[1001];
        memset(vis,0,sizeof(vis));
        for(i=1; i<=n; i++)
        {
            cin>>aarray[i];

        }
        for(i=n;i>1;i--)
        {
            j=i-1;
            while(aarray[j]>aarray[j+1]&&vis[j]==0)
            {
                swap(aarray[j],aarray[j+1]);
                vis[j]=-1;
                j--;
            }
        }
        for(i=1;i<n;i++)
        {
            if(aarray[i]>aarray[i+1]&&vis[i]==0)
            {
                swap(aarray[i],aarray[i+1]);
                vis[i]=-1;

            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<aarray[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


