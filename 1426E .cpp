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
    ll i,j,n,m,k,t;
    ll ar,as,ap,bs,br,bp;
    cin>>n;
    cin>>ar>>as>>ap;
    cin>>br>>bs>>bp;
    ll Max=min(ar,bs)+min(as,bp)+min(ap,br);
    ll x,y,z;
    x=max(0LL,ar-(br+bp));
    y=max(0LL,as-(br+bs));
    z=max(0LL,ap-(bp+bs));
    ll kk=max(x,max(y,z));
    cout<<kk<<" "<<Max<<endl;

    return 0;
}



