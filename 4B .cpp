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
ll a[50],b[50];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,tot,d;
    cin>>d>>tot;
    ll minsum=0,maxsum=0;
    for(i=1; i<=d; i++)
    {
        cin>>a[i]>>b[i];
        minsum+=a[i];
        maxsum+=b[i];
    }
    if(tot<minsum||tot>maxsum)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    vector<ll>v;
    ll dif=tot-minsum;
   // cout<<dif<<endl;
    for(i=1; i<=d; i++)
    {
        if(dif)
        {
            ll a1,a2;
            a1=a[i]+dif;
            a2=min(a1,b[i]);
            dif-=a2-a[i];
            v.push_back(a2);

        }
        else
            v.push_back(a[i]);
    }
    cout<<"YES"<<endl;
    for(i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}


