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
void solve()
{
    ll m,n,i,j,k,l;
    set<ll>sl;
    cin>>n>>k;
    ll ccount[100000+10];
    memset(ccount,0,sizeof(ccount));
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sl.insert(aarray[i]);
    }
    if(sl.size()>k)
    {
        cout<<-1<<endl;
        return ;
    }
    vector<ll>v;
    for(auto it=sl.begin(); it!=sl.end(); it++)
    {
        v.push_back(*it);
    }
    ll kk=v.size();
    l=0;
    while(v.size()<k)
    {
        v.push_back(v[l%kk]);
        l++;
    }
    cout<<(n*v.size())<<endl;
    while(n--)
    {
        for(i=0;i<v.size();i++)
            cout<<v[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,q,p,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


