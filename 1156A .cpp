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
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    ll sum=0;
    ll c=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<=n-1;i++)
    {
        if(aarray[i]==2&&aarray[i+1]==3||aarray[i]==3&&aarray[i+1]==2)
        {
            cout<<"Infinite"<<endl;
            return 0;
        }
    }
    for(i=2;i<=n;i++)
    {
        if(aarray[i-1]==1)
        {
            if(aarray[i]==2)
            {
                sum+=3;
            }
            if(aarray[i]==3)
            {
                sum+=4;
            }
        }
        else if(aarray[i-1]==2)
        {
            if(aarray[i]==1)
            {
                sum+=3;

            }
        }
        else
        {
            if(aarray[i]==1)
            {
                sum+=4;
            }
        }
    }
    for(i=1;i<=n-2;)
    {
        if(aarray[i]==3&&aarray[i+1]==1&&aarray[i+2]==2)
        {
            sum--;
            i+=3;
        }
        else i++;
    }
    cout<<"Finite"<<endl;
    cout<<sum<<endl;



    return 0;
}



