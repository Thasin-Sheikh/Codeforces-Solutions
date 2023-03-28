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
vector<ll>take[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,a;
    vector<pair<ll,pair<ll,ll>>>ans;
    cin>>k;
    for(i=0; i<k; i++)
    {
        cin>>n;
        vector<ll>v;
        ll sum=0;
        for(j=0; j<n; j++)
        {
            cin>>a;
            v.push_back(a);
            sum+=a;
        }
        for(j=0; j<n; j++)
        {
            ans.push_back(make_pair(sum-v[j],make_pair(i+1,j+1)));
        }
    }
    sort(ans.begin(),ans.end());
    for(i=0; i<ans.size()-1; i++)
    {
        if(ans[i].first==ans[i+1].first&&ans[i].second.first!=ans[i+1].second.first)
        {
            cout<<"YES"<<endl;
            cout<<ans[i].second.first<<" "<<ans[i].second.second<<endl;
            cout<<ans[i+1].second.first<<" "<<ans[i+1].second.second<<endl;
            return 0;

        }
    }
    cout<<"NO"<<endl;

    return 0;
}


