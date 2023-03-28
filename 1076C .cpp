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
    ll i,j,d,n,m,k,t;
    cin>>t;
    while(t--)
    {
        cin>>d;
        if(d==0)
        {
            cout<<"Y"<<" ";
            cout<<0<<" "<<0<<endl;
            continue;
        }
        if(d==1||d==2||d==3)
        {
            cout<<"N"<<endl;
            continue;
        }
        dl a,b;
        a=d+sqrt((d*d)-4*d);
        a/=2;
        b=d-sqrt((d*d)-4*d);
        b/=2;
        cout<<"Y"<<" ";
        cout<<setprecision(10)<<a<<" "<<b<<endl;
    }

    return 0;
}


