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
ll aa[N];
map<ll,ll>mp;
ll cum[N];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,a,b,c,d;
    cin>>n;
    vector<ll>v1,v2;
    for(i=0; i<n; i++)
    {
        cin>>aarray[i];
        v1.push_back(aarray[i]);
        mp[aarray[i]]=i;
        aa[i]=aarray[i];
    }
    cin>>str;
    v2=v1;
    sort(v2.begin(),v2.end());
    if(v2==v1)
    {
        cout<<"YES"<<"\n";
        return 0;
    }
    cum[0]=str[0]-'0';
    for(i=1; i<str.length(); i++)
    {
        if(str[i]=='0')
        {
            cum[i]=cum[i-1];
        }
        else
            cum[i]=cum[i-1]+1;

    }
    sort(aa,aa+n);
    ll e,f;
    for(i=0; i<n-1; i++)
    {
        if(aa[i]!=aarray[i])
        {
            a=mp[aarray[i]];
            b=mp[aa[i]];
            c=max(a,b);
            d=min(a,b);
            c--;
            f=(c-d)+1;
            if(d!=0)
                e=cum[c]-cum[d-1];
            else e=cum[c]-0;
            if(e!=f)
            {
                cout<<"NO"<<"\n";
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}


