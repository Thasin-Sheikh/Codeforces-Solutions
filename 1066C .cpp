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
    ll i,j,n,m,k,t,num;
    deque<ll>dq;
    char ch;
    cin>>n;
    ll l,r;
    l=1e6;
    r=1e6+1;
    for(i=1; i<=n; i++)
    {
        cin>>ch>>num;
        if(ch=='L')
        {
            aarray[num]=l;
            l--;
        }
        else if(ch=='R')
        {
            aarray[num]=r;
            r++;
        }
        else
        {
            m=aarray[num];
            ll a1,a2;
            a1=l+1;
            a2=r-1;
            ll m1,m2;
            m1=m-a1;
            m2=a2-m;
            cout<<min(m1,m2)<<endl;
        }
        //cout<<l<<" "<<r<<endl;
    }

    return 0;
}


