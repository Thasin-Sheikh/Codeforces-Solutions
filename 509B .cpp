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
    ll i,j,n,m,k,t=0,p,e,x,y;
    cin>>n>>k;
    ll mxe=0,mie=INT_MAX;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        mie=min(mie,aarray[i]);
        mxe=max(mxe,aarray[i]);
    }
    x=min(mie,k);
    y=x*2+abs(k-mie);
    //cout<<x<<" " <<y<<endl;
    if(mxe>y)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    vector<ll>v;
    p=1;
    set<ll>sl;
    for(i=1;i<=mie;i++)
    {
        v.push_back(p);
        sl.insert(p);
        p++;
        if(p>k)
            p=1;
    }
    ll el=*max_element(v.begin(),v.end());
    cout<<"YES"<<endl;
    for(i=1;i<=n;i++)
    {
        p=aarray[i];
        ll pp=p;
        for(j=1;j<=min(p,mie);j++)
        {
            cout<<v[j-1]<<" ";
            pp--;
        }
        ll last=1;
        while(pp)
        {
            cout<<last<<" ";
            last++;
            pp--;
        }
        cout<<endl;

    }
    return 0;
}


