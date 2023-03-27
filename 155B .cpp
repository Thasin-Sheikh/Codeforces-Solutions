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
    ll i,j,n,m,k,t,a,b;
    cin>>n;
    vector<pair<ll,ll>>v,v1;
    for(i=1; i<=n; i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(b,a));
        v1.push_back(make_pair(a,b));
    }
    sort(v1.rbegin(),v1.rend());
    sort(v.rbegin(),v.rend());
    ll c=1;
    ll sum=0;
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        if(it->first==0)
        {
            break;
        }
        else
        {
            c+=it->first-1;
            sum+=it->second;
        }
    }
    for(auto it=v1.begin(); it!=v1.end(); it++)
    {
        if(c)
        {
            if(it->second==0)
            {
                sum+=it->first;
                c--;
            }
        }
    }
    cout<<sum<<endl;



    return 0;
}


