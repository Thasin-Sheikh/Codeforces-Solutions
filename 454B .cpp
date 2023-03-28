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
    vector<ll>v,v1;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        v.push_back(m);
    }
    v1=v;
    sort(v1.begin(),v1.end());
    if(v1==v)
    {
        cout<<0<<endl;
        return 0;
    }
    vector<ll>ans;
    for(i=1;i<v.size();i++)
    {
        if(v[i]>=v[i-1])
            continue;
        else
        {
            for(j=i;j<v.size();j++)
            {
                ans.push_back(v[j]);
            }
            ll kkk=ans.size();
            for(j=0;j<i;j++)
            {
                ans.push_back(v[j]);
            }
            if(ans==v1)
            {
                cout<<kkk<<endl;
            }
            else cout<<-1<<endl;
            return 0 ;
        }
    }
}


