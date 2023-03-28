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
    dl j,m,k,t,d,p;
    ll i,n;
    cin>>n;
    vector<ll>v;
    for(i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            k=n/i;
            d=i;
            p=k/2;
            t=2+(k-1)*d;
            ll tot=t*p;
            //cout<<tot<<endl;
            v.push_back(tot);
            if(n/i!=i)
            {
                k=i;
                d=n/i;
                p=k/2;
                t=2+(k-1)*d;
                ll tot=t*p;
                //cout<<tot<<endl;
                v.push_back(tot);

            }

        }
    }
    sort(v.begin(),v.end());
    for(auto c:v)
        cout<<c<<" ";
    cout<<endl;
    return 0;
}


