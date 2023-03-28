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
ll aarray[1000005];
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
    cin>>n>>m;
    ll neg=0,pos=0;
    ll aa=0,s=0,c=0;
    ll mi=INT_MAX;
    for(i=1;i<=m;i++)
    {
        cin>>aarray[i];
        if(aarray[i]<0)
        {
            neg+=aarray[i];
        }
        else
        {
            pos+=aarray[i];
        }
        s+=aarray[i];
        if(s+n<=0&&c==0)
        {
            aa=i;
            c++;
        }
        sum+=aarray[i];
        mi=min(mi,sum);
    }
    ans=0;
    if(aa!=0)
    {
        cout<<aa<<"\n";
        return;
    }
    if(abs(neg)<=abs(pos))
    {
        cout<<-1<<"\n";
        return ;
    }
    mi=abs(mi);
    sum=abs(sum);
    ll p=n-mi;
    k=p/sum;
    ans=k*m;
    p%=sum;
    p+=mi;
    i=1;
    //cout<<ans<<" "<<p<<endl;
    while(p>0)
    {
        if(i>m)
            i=1;
        p+=aarray[i];
        i++;
        ans++;
    }
    cout<<ans<<"\n";
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
