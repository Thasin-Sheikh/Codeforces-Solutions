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
ll aarray[100000+10];
ll op[100000+100],imple[100000+100];
ll l[100000+100],r[100000+100],d[100000+100];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,x,y;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>l[i]>>r[i]>>d[i];
    }
    for(i=1;i<=k;i++)
    {
        cin>>x>>y;
        op[x]++;
        op[y+1]--;
    }
    for(i=1;i<=m;i++)
    {
        op[i]+=op[i-1];
    }
    for(i=1;i<=m;i++)
    {
        ll p=d[i];
        p*=op[i];
        imple[l[i]]+=p;
        imple[r[i]+1]-=p;
    }
    for(i=1;i<=n;i++)
    {
        imple[i]+=imple[i-1];
    }
    for(i=1;i<=n;i++)
    {
       aarray[i]+=imple[i];
    }
    for(i=1;i<=n;i++)
    {
        cout<<aarray[i]<<" ";
    }
    cout<<endl;
    return 0;
}

