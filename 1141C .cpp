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
ll aa[200000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,s=0,f=0;
    vector<ll>v;
    cin>>n;
    for(i=1; i<n; i++)
    {
        cin>>aarray[i];
        s+=aarray[i];
        if(s<f)
            f=s;

    }
    aa[0]=1-f;
    for(i=1;i<n;i++)
    {
        aa[i]=aa[i-1]+aarray[i];
    }
    set<ll>sl;
    for(i=0;i<n;i++)
    {
        if(aa[i]<1||aa[i]>n)
        {
            cout<<-1<<endl;
            return 0;
        }
        sl.insert(aa[i]);
    }
    if(sl.size()!=n)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        cout<<aa[i]<<" ";
    }
    cout<<endl;

}


