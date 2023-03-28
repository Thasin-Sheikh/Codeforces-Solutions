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
    cin>>n;
    vector<ll>ans;
    for(i=1;i<=100;i++)
    {
        k=n-i;
        ll sum=0;
        while(k)
        {
            ll l=k%10;
            sum+=l;
            k/=10;
        }
        if(sum==i)
        {
            ans.push_back(n-i);
        }
    }
    cout<<ans.size()<<endl;
    sort(ans.begin(),ans.end());
    for(auto c:ans)
        cout<<c<<endl;

    return 0;
}


