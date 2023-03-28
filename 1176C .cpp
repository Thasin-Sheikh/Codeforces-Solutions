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
ll aarray[500000+10];
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
    vector<ll> given({4,8,15,16,23,42});
    vector<ll>add(6);
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>aarray[i];
        aarray[i]=lower_bound(given.begin(),given.end(),aarray[i])-given.begin();
    }
    for(i=0; i<n; i++)
    {
        if(aarray[i]==0)
        {
            add[0]++;
        }
        else
        {
            if(add[aarray[i]-1]>0)
            {
                add[aarray[i]-1]--;
                add[aarray[i]]++;
            }
        }
    }
    cout<<n-6*add[5]<<endl;

    return 0;
}


