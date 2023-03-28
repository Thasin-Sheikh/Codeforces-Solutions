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
    ll i,j,n,m=INT_MIN,k,t;
    cin>>n;
    ll b=0,c=0;
    vector<ll>v;
    ll ad=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        if(aarray[i]>0&&aarray[i]%2==1)
        {
            b++;
            v.push_back(aarray[i]);
        }
        if(aarray[i]<0&&aarray[i]%2)
        {
            c++;
            m=max(m,aarray[i]);
        }
        if(aarray[i]>0&&aarray[i]%2==0)
            ad+=aarray[i];
    }
    if(b==0)
    {
        ll sum=0;
        for(i=1; i<=n; i++)
        {
            if(aarray[i]>0&&aarray[i]%2==0)
            {
                sum+=aarray[i];
            }
        }
        sum+=m;
        cout<<sum<<endl;
        return 0;
    }
    sort(v.rbegin(),v.rend());
    ll num=v.back();
    ll p;
    if(m==INT_MIN)
        m=0;
    if(ll(v.size())%2==0)
    {
        v.pop_back();
        for(i=0; i<v.size(); i++)
            ad+=v[i];
        if(m%2)
        {
            p=m+ad+num;
            if(p>ad)
                ad=p;
        }
    }
    else
        for(i=0; i<v.size(); i++)
            ad+=v[i];
    cout<<ad<<endl;


    return 0;
}



