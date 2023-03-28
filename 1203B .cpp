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
    ll i,j,n;
    cin>>n;
    ll cnt[100000+10]={0};
    set<ll>sl;
    vector<ll>v,ans;
    for(i=1;i<=4*n;i++)
    {
        cin>>aarray[i];
        //cnt[aarray[i]]++;
        v.push_back(aarray[i]);
    }
    sort(v.begin(),v.end());
    ll area=v[0]*v[v.size()-1];
    //cout<<area<<endl;
    for(i=0,j=v.size()-1;i<2*n,j>=n*2;i+=2,j-=2)
    {
        if(v[i]==v[i+1]&&v[j]==v[j-1]&&(v[i]*v[j])==area)
        {
            continue;
        }
        else
        {
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
}
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
        solve();
    }

    return 0;
}


