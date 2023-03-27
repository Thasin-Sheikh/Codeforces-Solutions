
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
bool prime[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    dl a,b,c,d,e,f,x,y,k,t,A,mod,B,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    x=v.back();
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    y=v1.back();
    v.clear();
    cin>>l;
    for(i=0;i<l;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll z;
    z=v.front();
    cin>>A>>B;
    dl r2;
    r2=(B*y)/((A*z)+(B*y));
    r2=sqrt(r2);
    r2*=x;
    cout<<setprecision(15)<<r2<<endl;

    return 0;
}
