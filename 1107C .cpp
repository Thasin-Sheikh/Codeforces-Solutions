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
    cin>>n>>k;
    for(i=0; i<n; i++)
        cin>>aarray[i];
    cin>>str;
    char ch=str[0];
    vector<ll>v;
    v.push_back(aarray[0]);
    str.push_back('0');
    ll ans=0;
    for(i=1; i<str.length(); i++)
    {
        if(str[i]==ch)
        {
            v.push_back(aarray[i]);
        }
        else
        {
            ch=str[i];
            sort(v.rbegin(),v.rend());
            for(j=0; j<min(k,ll(v.size())); j++)
            {
                ans+=v[j];
            }
            v.clear();
            v.push_back(aarray[i]);
        }
        //cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<endl;

    return 0;
}


