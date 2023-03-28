///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI acos(-1)
//#define R 510
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int ;
using dl =double;
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
const long maxn=5e5+10;
ll aarray[N];
//ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll large[10000005];
int dx[] = {-1 , 0 , 1 , 0};
int dy[] = {0 , 1 , 0 , -1};
ll vis[N];
map<ll,ll>mp;
void solve()
{
    ll i,j,k,m,n,l,q,p,ans,sum=0;
    string str;
    bool yes=true;
    vector<ll>v;
    dl x1,y2,y1,x2,R;
    cin>>R>>x1>>y1>>x2>>y2;
    dl dis=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
    if(dis>=R*R)
    {
        cout<<fixed<<setprecision(15)<<x1<<" "<<y1<<" "<<R<<"\n";
        return ;
    }
    if(dis==0)
    {
        cout<<fixed<<setprecision(15)<<x1+dl(R/2)<<" "<<y1*1.0<<" "<<dl(R/2)<<"\n";
        return ;
    }
    dl r, xap,yap;
    dis=sqrt(dis);
    r=(R+dl(dis))/dl(2);
    dl m2=(dis);
    dl m1=r-(dis);
    //cout<<m1<<" "<<m2<<endl;
    xap=x1*(m1+m2)-m1*x2;
    xap/=m2;
    yap=y1*(m1+m2)-m1*y2;
    yap/=m2;
    cout<<setprecision(15)<<xap<<" "<<yap<<" "<<r<<"\n";
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
