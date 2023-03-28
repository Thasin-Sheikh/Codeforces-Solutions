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
bool ok[200010];
map<ll,ll>mp;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a;
    cin>>n>>k;
    deque<ll>dq;
    set<ll>sl;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(mp[a]==0)
        {
            if(dq.size()==k)
            {
                dq.push_front(a);
                mp[a]=1;
                ll num=dq.back();
                dq.pop_back();
                mp[num]=0;
            }
            else
            {
                dq.push_front(a);
                mp[a]=1;
            }
        }

    }
    cout<<dq.size()<<endl;
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }

    return 0;
}


