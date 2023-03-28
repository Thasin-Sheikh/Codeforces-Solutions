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
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a;
    cin>>n>>t;
    ll sum=0;
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        sum+=a;
        v.push_back(sum);
    }
    ll presum=v[v.size()-1];
    sum=0;
    while(t--)
    {
        cin>>a;
        sum+=a;
        k=lower_bound(v.begin(),v.end(),sum)-v.begin();
        if(k==n)
        {
            cout<<n<<endl;
            sum=0;
            continue;
        }
        else if(sum==presum)
        {
            cout<<n<<endl;
            sum=0;
            continue;
        }
        if(v[k]>sum)
        {
            k--;
        }
        cout<<(n-(k+1))<<endl;
    }

    return 0;
}


