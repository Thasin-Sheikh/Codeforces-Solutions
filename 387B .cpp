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
    ll i,j,n,m,k,t,a;
    cin>>n>>m;
    vector<ll>fn,fm;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        fn.push_back(a);
    }
    for(i=1;i<=m;i++)
    {
        cin>>a;
        fm.push_back(a);
    }
    sort(fn.begin(),fn.end());
    sort(fm.begin(),fm.end());
    for(i=0;i<fn.size();i++)
    {
        for(j=0;j<fm.size();j++)
        {
            if(fm[j]>=fn[i])
            {
                n--;
                fm[j]=-1;
                break;
            }
        }
    }
    cout<<n<<endl;

    return 0;
}


