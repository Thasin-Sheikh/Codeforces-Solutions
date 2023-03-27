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
    string str[10000];
    ll i,j,n,m,k,t;
    cin>>n;
    vector<ll>v;
    for(i=1; i<=n; i++)
    {
        cin>>str[i];
        ll sum=0;
        for(j=0; j<str[i].length(); j++)
        {
            sum+=str[i][j]-'0';
        }
        v.push_back(sum);
    }
    ll ans=0;
    for(i=0; i<v.size()-1; i++)
    {
        if(v[i]!=-1)
        {
            for(j=i+1; j<v.size(); j++)
            {
                if((v[i]+v[j])%3==0&&(v[j]!=-1))
                {
                    v[i]=v[j]=-1;
                    ans++;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}


