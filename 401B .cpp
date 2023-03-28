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
    ll i,j,n,m,k,t,minr=0,maxr;
    cin>>n>>k;
    set<ll>sl;
    vector<ll>v;
    ll a,a1,a2;
    for(i=1; i<=k; i++)
    {
        cin>>a;
        if(a==2)
        {

            cin>>a1;
            sl.insert(a1);
        }
        else
        {
            cin>>a1>>a2;
            sl.insert(a1);
            sl.insert(a2);

        }
    }
    maxr=n-sl.size()-1;
    for(i=1; i<n; i++)
    {
        if(sl.find(i)==sl.end())
        {
            v.push_back(i);
        }
    }
    for(i=0; i<v.size();)
    {
        if(v[i+1]-v[i]==1)
        {
            minr++;
            i+=2;
        }
        else
        {
            minr++;
            i++;
        }
    }
    cout<<minr<<" "<<maxr<<endl;
    return 0;
}


