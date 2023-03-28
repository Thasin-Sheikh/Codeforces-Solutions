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
    ll i,j,n,m,k,x,y,t,a,b;
    cin>>n>>x>>y;
    ll px1,px2,px3,px4,py1,py2,py3,py4;
    px1=x+1,py1=y;
    px2=x-1,py2=y;
    px3=x,py3=y+1;
    px4=x,py4=y-1;
    ll px1c=0,px2c=0,px3c=0,px4c=0;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        if(a>x)
            px1c++;
        else if(a<x)
            px2c++;
        if(b>y)
            px3c++;
        else px4c++;

    }
    ll ans=max(px1c,max(px2c,max(px3c,px4c)));
    cout<<ans<<endl;
    if(ans==px1c)
    {
        cout<<px1<<" "<<py1<<endl;
    }
    else if(ans==px2c)
    {
        cout<<px2<<" "<<py2<<endl;
    }
    else if(ans==px3c)
    {
        cout<<px3<<" "<<py3<<endl;
    }
    else cout<<px4<<" "<<py4<<endl;


    return 0;
}


