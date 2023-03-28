///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,tot,tk,l,r,a,b,c;
    cin>>n>>k>>l>>r>>tot>>tk;
    vector<ll>v;
    m=tk/k;
    a=tk%k;
    for(i=1; i<=k; i++)
    {
        if(a)
        {
            b=m+1;
            a--;
            v.push_back(b);
        }
        else
        {
            v.push_back(m);
        }
    }
    ll baki=tot-tk;
    if(baki!=0)
    {
        ll ache=n-k;
        ll ok=baki/ache;
        ll d=baki%ache;
        for(i=1; i<=(n-k); i++)
        {
            if(d)
            {
                b=ok+1;
                d--;
                v.push_back(b);
            }
            else
            {
                v.push_back(ok);
            }
        }
    }
    for(auto c:v)
    {
        cout<<c<<" ";
    }
    cout<<"\n";

    return 0;
}



