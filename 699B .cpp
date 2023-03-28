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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
char magic[1005][1005];
vector<ll>primes;
bool ok[1000001];
ll row[10000],col[10000];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>m;
    ll tot=0,c;
    for(i=1; i<=n; i++)
    {
        c=0;
        for(j=1; j<=m; j++)
        {
            cin>>magic[i][j];
            if(magic[i][j]=='*')
                c++,tot++;
        }
        row[i]=c;
    }
    /*if(tot==0)
    {
        cout<<"YES"<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }*/
    for(i=1; i<=m; i++)
    {
        c=0;
        for(j=1; j<=n; j++)
        {
            if(magic[j][i]=='*')
            {
                c++;
            }
        }
        col[i]=c;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {

            k=row[i]+col[j];
            if(magic[i][j]=='*')
            k--;
            if(k==tot)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<j<<endl;
                return 0;
            }

        }
    }
    cout<<"NO"<<endl;

    return 0;
}



