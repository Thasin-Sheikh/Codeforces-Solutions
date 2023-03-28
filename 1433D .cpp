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
void solve()
{
    ll i,j,k,n,m;
    cin>>n;
    set<ll>st;
    map<ll,ll>mp,pp;
    ll c=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        st.insert(aarray[i]);
    }
    ll ko=st.size();
    if(ko==1)
    {
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES"<<endl;
    c=n;
    i=1;
    while(1)
    {
        ll p=aarray[i],f;
        c--;
        pp[i]=-1;
        for(j=1; j<=n; j++)
        {
            if(aarray[j]!=p&&pp[j]!=-1)
            {
                cout<<i<<" "<<j<<endl;
                pp[j]=-1;
                k=j;
                c--;
            }
        }
        i=k;
        if(c<=1)
        {
            for(j=1; j<=n; j++)
            {
                if(pp[j]!=-1)
                {
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
            break;
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
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



