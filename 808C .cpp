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
ll ans[10000];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,w,k,t=0;
    cin>>n>>w;
    vector<ll>v;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        v.push_back(aarray[i]);
        t+=aarray[i]/2;
        if(aarray[i]%2)
            t++;
    }
    if(t>w)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(aarray,aarray+n+1);
    ll dif=w-t;
    //cout<<dif<<endl;
    for(i=n;i>=1;i--)
    {
        for(j=0;j<v.size();j++)
        {
            if(v[j]==aarray[i])
            {
                ans[j]=aarray[i]/2;
                if(aarray[i]%2)
                    ans[j]+=1;
                //cout<<ans[j]<<" ";
                ll k=aarray[i]-ans[j];
                //cout<<k<<endl;
                ll mn=min(k,dif);
                //cout<<mn<<endl;
                //cout<<ans[j]<<endl;
                ans[j]=ans[j]+mn;
                dif-=mn;
                v[j]=-1;
                break;
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;




    return 0;
}


