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
    ll i,j,n,m,k,t,r,avg;
    cin>>n>>m>>avg;
    ll a ,b,tot=0;
    vector<pair<ll,ll>>v;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        tot+=a;
        v.push_back(make_pair(b,a));
    }
    ll lagbe=avg*n;
    lagbe=lagbe-tot;
    if(tot/n>=avg)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
    ll likhte_hobe=0;
    //cout<<lagbe<<" "<<tot<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        k=it->second;
        k=abs(k-m);
        k=min(k,lagbe);
        lagbe-=k;
        k*=it->first;
       // cout<<k<<endl;
        likhte_hobe+=k;
        if(lagbe==0)
        {
            break;
        }
    }
    cout<<likhte_hobe<<endl;


    return 0;
}


