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
ll a,b,c;
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
        cin>>a>>b>>c;
        ll ans=0;
        ans=min(max(c,a+b),max(a,b+c));
        if(a>b)
        {
            k=abs(b-a);
            t=k/2;
            if(k%2)
            {
                t++;
            }
            a=a-t;
            b=b+t;
            if(b<c)
            {
                k=abs(c-b);
                t=k/2;
                if(k%2)
                {
                    t++;
                }
                b+=t;
                c-=t;
            }
            else
            {
                k=abs(c-b);
                t=k/2;
                if(k%2)
                {
                    t++;
                }
                b-=t;
                c+=t;
            }
        }
        else
        {
            k=abs(a-b);
            t=k/2;
            if(k%2)
                t++;
            a+=t;
            b-=t;
            if(b<c)
            {
                k=abs(b-c);
                t=k/2;
                if(k%2)
                {
                    t++;
                }
                c-=t;
                b+=t;
            }
            else
            {
                k=abs(b-c);
                t=k/2;
                if(k%2)
                {
                    t++;
                }
                b-=t;
                c+=t;
            }
        }
        cout<<max(a,max(b,c))<<endl;
    }

    return 0;
}



