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
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<ll,ll>mp;
        vector<ll>v,v1,v2;
        for(i=1; i<=n; i++)
        {
            cin>>aarray[i];
        }
        sort(aarray+1,aarray+n+1);
        if(n%2==0)
        {
            for(i=1,j=n; i<=n/2,j>n/2; i++,j--)
            {
                v.push_back(aarray[j]);
                v.push_back(aarray[i]);
            }
        }
        else
        {
            for(i=1,j=n; i<=n/2,j>((n+1)/2); i++,j--)
            {
                v.push_back(aarray[j]);
                v.push_back(aarray[i]);
            }
            v.push_back(aarray[(n+1)/2]);
        }
        reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}


