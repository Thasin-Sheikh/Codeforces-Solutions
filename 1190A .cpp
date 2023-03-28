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
    ll i,j,n,m,k,t;
    cin>>n>>m>>k;
    ll cur;
    deque<ll>dq;
    ll a ;
    for(i=1;i<=m;i++)
    {
        cin>>a;
        dq.push_back(a);
    }
    ll ans=0,cnt=0,p=0,tp=0;
    while(!dq.empty())
    {
        p=(dq.front()-tp-1)/k;
        ans++;
        cnt=0;
        while(!dq.empty())
        {
            ll pp=(dq.front()-tp-1)/k;
            if(pp==p)
            {
                dq.pop_front();
                cnt++;
            }
            else break;
        }
        tp+=cnt;
    }
    cout<<ans<<endl;

    return 0;
}


