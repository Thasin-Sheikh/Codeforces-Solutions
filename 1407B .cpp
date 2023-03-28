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
bool prime[10001];
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
        cin>>n;
        ll a,p,x,ma=INT_MIN;
        vector<ll>v,ans;
        for(i=0; i<n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ans.push_back(v.back());
        v.pop_back();
        memset(prime,true,sizeof(prime));
        ll f=n-1;
        x=ans[0];
        while(f--)
        {
            ll xx=0,num,in;
            for(i=0; i<v.size(); i++)
            {
                if(prime[i])
                {
                    k=__gcd(x,v[i]);
                    if(k>xx)
                    {
                        xx=k;
                        num=v[i];
                        in=i;
                    }
                }
            }
            ans.push_back(num);
            prime[in]=false;
            x=xx;
        }
        for(auto c:ans)
            cout<<c<<" ";
        cout<<endl;
    }

    return 0;
}

