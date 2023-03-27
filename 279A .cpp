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
    ll i,j,n,m,k,t;
    vector<ll>ans;
    cin>>n;
    map<ll,ll>mp;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
    }
    if(mp[0])
    {
        ans.push_back(0);
    }
    if(mp[100])
    {
        ans.push_back(100);
    }
    bool fl=false;
    for(i=1;i<10;i++)
    {
        if(mp[i])
        {
            fl=true;
            ans.push_back(i);
            break;
        }
    }
    bool fl1=false;
    for(i=10;i<100;i+=10)
    {
        if(mp[i])
        {
            fl1=true;
            ans.push_back(i);
            break;
        }
    }
    if(fl==false&&fl1==false)
    {
        for(i=1;i<100;i++)
        {
            if(mp[i])
            {
                fl=true;
                ans.push_back(i);
                break;
            }
        }
    }
    cout<<ans.size()<<endl;
    for(i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";



    return 0;
}


