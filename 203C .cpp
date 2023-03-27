
///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
vector<pair<ll,ll>>vp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,l,h,a,b,k,t;
    cin>>n>>t;
    cin>>l>>h;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        k=a*l+b*h;
        vp.push_back({k,i});
    }
    sort(vp.begin(),vp.end());
    vector<ll>ans;
    ll sum=0;
    for(auto it=vp.begin();it!=vp.end();it++)
    {
        if(sum+it->first>t)
        {
            break;
        }
        else
        {
            sum+=it->first;
            ans.push_back(it->second);
        }
    }
    cout<<ans.size()<<endl;
    for(auto c:ans)
    {
        cout<<c<<" ";
    }
    cout<<"\n";
    return 0;
}



