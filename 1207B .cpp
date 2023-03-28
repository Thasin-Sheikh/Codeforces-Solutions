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
ll target[101][101];
vector<ll>primes;
bool flag[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    memset(flag,true,sizeof(flag));
    vector<pair<ll,ll>>vp;
    cin>>n>>m;
    for(i=1;i<=n+1;i++)
    {
        for(j=1;j<=m+1;j++)
            target[i][j]=0;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<m;j++)
        {
            if(magic[i][j]==1)
            {
                if(magic[i+1][j]==1&&magic[i][j+1]==1&&magic[i+1][j+1]==1)
                {
                    vp.push_back(make_pair(i,j));
                    target[i+1][j]=target[i][j+1]=target[i+1][j+1]=target[i][j]=-1;
                }
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(magic[i][j]==1&&target[i][j]==0)
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
    }
    cout<<vp.size()<<endl;
    for(auto it=vp.begin();it!=vp.end();it++)
        cout<<it->first<<" "<<it->second<<endl;

    return 0;
}


