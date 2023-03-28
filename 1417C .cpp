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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[300000+10];
ll magic[101][101];
vector<ll>primes;
bool ok[1000001];
vector<ll>v[300000+10],vv[300000+10];
map<ll,ll>mp,mpp;
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
        memset(v,0,sizeof(v));
        for(i=1; i<=n; i++)
        {
            cin>>aarray[i];
            k=mp[aarray[i]];
            ll dif=i-mpp[aarray[i]];
            k=max(k,dif);
            mp[aarray[i]]=k;
            mpp[aarray[i]]=i;
        }
        for(i=1; i<=n; i++)
        {
            k=mp[aarray[i]];
            ll dif=(n+1)-mpp[aarray[i]];
            k=max(k,dif);
            mp[aarray[i]]=k;

        }
        for(i=1;i<=n;i++)
        {
            v[mp[aarray[i]]].push_back(aarray[i]);
        }
        ll ans=INT_MAX;
        for(i=1;i<=n;i++)
        {
            if(v[i].size()==0&&ans==INT_MAX)
            {
                cout<<-1<<" ";
                continue;
            }
            else
            {
                if(v[i].size()==0)
                {
                    cout<<ans<<" ";
                }
                else
                {
                    ll kk=*min_element(v[i].begin(),v[i].end());
                    ans=min(ans,kk);
                    cout<<ans<<" ";
                }
            }
        }
        cout<<endl;
        mp.clear();
        mpp.clear();

    }

    return 0;
}



