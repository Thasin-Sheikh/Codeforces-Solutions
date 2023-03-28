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
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,sum=0,way=1;
    vector<ll>man,index;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>aarray[i];
        man.push_back(aarray[i]);
        mp[aarray[i]]=i;
    }
    sort(man.rbegin(),man.rend());
    for(i=0;i<m;i++)
    {
        sum+=man[i];
        index.push_back(mp[man[i]]);
    }
    sort(index.begin(),index.end());
    for(i=1;i<index.size();i++)
    {
        way*=(index[i]-index[i-1]);
        way%=998244353;
    }
    cout<<sum<<" "<<way<<endl;

    return 0;
}


