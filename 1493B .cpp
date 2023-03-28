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
using ld=long double;
using ull=unsigned long long;
const long N = 3e5 + 10;
ll aarray[N];
ll magic[R][R];
vector<ll>primes;
bool check[1000001];
ll vis[N];
map<ll,ll>mp;
string str;
void solve()
{
    ll i,j,k,m,h,n,l,r,q,ans,sum=0;
    bool yes=true;
    vector<ll>v;
    cin>>h>>m;
    cin>>str;
    ll H,M;
    H=(str[0]-'0')*10+str[1]-'0';
    M=(str[3]-'0')*10+str[4]-'0';
    mp[0]=0;
    mp[1]=1;
    mp[2]=5;
    mp[3]=-1;
    mp[4]=-1;
    mp[5]=2;
    mp[6]=-1;
    mp[7]=-1;
    mp[8]=8;
    mp[9]=-1;
    while(1)
    {
        if(M==m)
        {
            H++;
            M=0;
        }
        if(H==h)
            H=0;
        string mni,hor;
        mni=to_string(M);
        if(mni.size()==1)
        {
            mni='0'+mni;
        }
        hor=to_string(H);
        if(hor.size()==1)
        {
            hor='0'+hor;
        }
        //cout<<mni<<" "<<hor<<" "<<M<<endl;
        ll w,x,y,z;
        w=mp[mni[0]-'0'],x=mp[mni[1]-'0'];
        y=mp[hor[0]-'0'],z=mp[hor[1]-'0'];
        //cout<<H<<" "<<M<<" "<<hor<<" "<<mni<<" "<<w<<" "<<x<<" "<<y<<" "<<z<<endl;
        if(w!=-1&&x!=-1&&y!=-1&&z!=-1)
        {
            z*=10;
            z+=y;
            x*=10;
            x+=w;
            if(x<h&&z<m)
            {
                cout<<hor<<':'<<mni<<"\n";
                return ;
            }
        }
        M++;
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


