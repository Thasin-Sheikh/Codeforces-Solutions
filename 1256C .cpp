///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
ll ans[N];
void solve()
{
    ll i,j,k,m,n,d,l,r,q,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    cin>>n>>m>>d;
    for(i=1; i<=m; i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
    }
    if(d>n||sum+d>=n+1)
    {
        j=1;
        ll c=aarray[1];
        for(i=1; i<=n; i++)
        {
            if(c)
            {
                ans[i]=j;
                c--;
            }
            else
            {
                j++;
                if(j<=m)
                {
                    c=aarray[j];
                    ans[i]=j;
                    c--;
                }
                else
                {
                    c=0;
                    ans[i]=0;
                }
            }
        }
        cout<<"YES"<<"\n";
        for(i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        return ;
    }
    ll needjump=n-sum;
    ll pos=0;
    j=1;
    ll c=aarray[j];
    for(i=1; i<=n; i++)
    {

        if(needjump<d)
        {
            ll p;
            //cout<<i<<" "<<needjump<<endl;
            for(p=i; p<=i+needjump-1; p++)
            {
                ans[p]=0;
            }
            c=aarray[j];
            //cout<<c<<endl;
            for(; p<=n; p++)
            {
                if(c)
                {
                    ans[p]=j;
                    c--;
                }
                else
                {
                    j++;
                    if(j<=m)
                    {
                        c=aarray[j];
                        ans[p]=j;
                        c--;
                    }
                    else
                    {
                        c=0;
                        ans[p]=0;

                    }
                }

            }
            break;
        }
        else if(i-pos<d)
        {
            //cout<<i<<" "<<pos<<endl;
            ans[i]=0;
        }
        else
        {
            if(j>m)
            {
                cout<<"NO"<<"\n";
                return;
            }
            //cout<<j<<endl;
            ans[i]=j;
            c=aarray[j];
            ll in=i;
            //cout<<in<<" "<<c<<" "<<in<<endl;
            for(ll p=in; p<=in+c-1; p++)
            {
                ans[p]=j;

            }
            i=in+c-1;
            pos=i;
            j++;
            //cout<<needjump<<" ";
            needjump-=min(needjump,d-1);
            //cout<<needjump<<endl;
        }
        //cout<<i<<" "<<needjump<<endl;
    }
    cout<<"YES"<<"\n";
    for(i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //tle khaite chas to endl use kor
    makefast__
    string str;
    ll i,j,n,m,k,t;
    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
