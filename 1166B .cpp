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
bool prime[100001];
void seive()
{
    ll i,j,n;
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=2; i<=10000; i++)
    {
        if(prime[i])
        {
            for(j=2*i; j<=10000; j+=i)
                prime[j]=false;
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m=1,k,t=1;
    seive();
    cin>>n;
    if(prime[n]||n<10)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(i>=5&&n/i>=5)
            {
                m=i;
                t=n/i;
                break;
            }
        }
    }
    if(m==1&&t==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    str="aeiou";
    for(i=0; i<m; i++)
    {
        for(j=0; j<t; j++)
        {
            cout<<str[(i+j)%5];
        }
    }
    cout<<endl;


    return 0;
}

