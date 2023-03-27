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
const int N = 1e5;
ll aarray[200000+10];
ll magic[101][101];
bool funky[100000000];
map<ll,ll>mp;
void create()
{
    ll i;
    for(i=1;i<N;i++)
    {
        aarray[i]=i*(i+1)/2;
        mp[aarray[i]]=1;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    create();
    cin>>n;
    for(i=1;aarray[i]<n;i++)
    {
        if(mp[n-aarray[i]]==1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}


