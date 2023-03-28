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
ll i,j,n,m,k,t,a,b,vanila,choco,ft,st;
void solve()
{
    ll d,k,k1,l;
    cin>>vanila>>choco>>ft>>st;
    if(vanila+choco<ft+st)
    {
        cout<<"No"<<endl;
        return ;
    }
    if(vanila>choco)
    {
        d=min(st,choco);
        st-=d;
        choco-=d;
        if(vanila+choco>=ft&&st==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    else
    {
        d=min(st,vanila);
        st-=d;
        vanila-=d;
        if(choco+vanila>=ft&&st==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    cin>>t;
    while(t--)
    {
        solve();

    }

    return 0;
}


