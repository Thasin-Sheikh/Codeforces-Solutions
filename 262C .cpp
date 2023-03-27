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
    ll i,j,n,m,k,t;
    vector<ll>a,b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>m;
        a.push_back(m);
    }
    sort(a.begin(),a.end());
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m;
        b.push_back(m);
    }
    sort(b.begin(),b.end());
    ll op=a[0];
    ll sum=0;
    while(b.size()>0)
    {
        k=op;
        while(k)
        {
            if(b.size()==0)
            {
                break;
            }
            else
            {
                sum+=b.back();
                b.pop_back();
                k--;
            }
        }
        if(b.size()>0)
        b.pop_back();
        if(b.size()>0)
        b.pop_back();
    }
    cout<<sum<<endl;

    return 0;
}



