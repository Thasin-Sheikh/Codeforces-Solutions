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
void solve()
{
    ll i,j,k,m,n,l,r,q,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    priority_queue<pair<ll,ll>>pq;
    cin>>n;
    for(i=1; i<=n*n; i++)
    {
        cin>>aarray[i];
        mp[aarray[i]]++;
    }
    for(i=1; i<=n*n; i++)
    {
        if(mp[aarray[i]])
        {
            pq.push({mp[aarray[i]],aarray[i]});
            mp[aarray[i]]=0;
        }
    }
    for(i=1; i<=n/2; i++)
    {
        for(j=1; j<=n/2; j++)
        {
            pair<ll,ll>x=pq.top();
            pq.pop();
            ll c=0;
            magic[i][j]=x.second;
            c++;
            l=n-j+1;
            //cout<<i<<" "<<j<<" "<<l<<" "<<x.second<<endl;
            if(l!=j)
            {
                magic[i][l]=x.second;
                c++;
            }
            l=n-i+1;
            //cout<<i<<" "<<j<<" "<<l<<" "<<x.second<<endl;
            if(i!=l)
            {
                magic[l][j]=x.second;
                c++;
            }
            k=n-j+1;
            //cout<<i<<" "<<j<<" "<<l<<" "<<k<<" "<<x.second<<endl;
            if(l!=i&&k!=j)
            {
                magic[l][k]=x.second;
                c++;
            }
            ll z;
            z=x.first-c;
            //cout<<z<<" "<<c<<" "<<i<<" "<<j<<" "<<l<<" "<<k<<endl;
            if(z<0)
            {
                // cout<<1<<endl;
                cout<<"NO"<<"\n";
                return;
            }
            pq.push({z,x.second});
        }
    }
    if(n%2)
    {
        i=(n+1)/2;
        for(j=1; j<=n/2; j++)
        {
            pair<ll,ll>x=pq.top();
            magic[i][j]=x.second;
            ll c=1;
            l=n-j+1;
            if(l!=j)
            {
                c++;
                magic[i][l]=x.second;
            }
            ll z=x.first-c;
            if(z<0)
            {
                cout<<"NO"<<"\n";
                return ;
            }
            pq.pop();
            pq.push({z,x.second});
        }
        for(j=1; j<=n/2; j++)
        {
            pair<ll,ll>y=pq.top();
            magic[j][i]=y.second;
            ll c=1;
            l=n-j+1;
            if(l!=j)
            {
                magic[l][i]=y.second;
                c++;
            }
            ll z=y.first-c;
            if(z<0)
            {
                cout<<"NO"<<"\n";
                return ;
            }
            pq.pop();
            pq.push({z,y.second});

        }
        j=(n+1)/2;
        if(magic[i][j]==0)
        {
            magic[i][j]=pq.top().second;
        }
    }
    cout<<"YES"<<"\n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<magic[i][j]<<" ";
        }
        cout<<'\n';
    }
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
