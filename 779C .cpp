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
ll a[200000+10],b[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n>>k;
    vector<pair<ll,ll>>vp;
    vector<ll>ans,aa;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>b[i];
    }
    priority_queue<pair<ll,pair<ll,ll>>>pp;
    for(i=1; i<=n; i++)
    {
        vp.push_back(make_pair(a[i],b[i]));
        if(a[i]>b[i])
        {
            pp.push({-(a[i]-b[i]),{a[i],b[i]}});

        }
    }
    sort(vp.begin(),vp.end());
    for(auto it=vp.begin(); it!=vp.end(); it++)
    {
        if(it->first<=it->second)
            ans.push_back(it->first);
        else
            aa.push_back(it->second);
    }

    ll sum1=0,sum2=0;
    for(i=0; i<ans.size(); i++)
        sum1+=ans[i];
    for(i=0; i<aa.size(); i++)
        sum2+=aa[i];
    if(ans.size()>=k)
    {
        cout<<sum1+sum2<<endl;
        return 0;
    }
    //cout<<sum1<<" "<<sum2<<endl;
    //cout<<k<<endl;
    k-=ans.size();
    while(k)
    {
        ll num=pp.top().second.first;
        sum1+=num;
        sum2-=pp.top().second.second;
        pp.pop();
        //cout<<sum1<<" "<<sum2<<endl;
        k--;
    }
    cout<<sum1+sum2<<endl;
    return 0;
}


