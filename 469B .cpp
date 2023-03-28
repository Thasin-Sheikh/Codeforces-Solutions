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
bool puck[100001];
bool quck[100001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll a[10001],b[10001],a1,b1,c,d,e,f,x,p,q,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>p>>q>>l>>r;
    memset(puck,false,sizeof(puck));
    for(i=1; i<=p; i++)
    {
        cin>>a1>>b1;
        for(j=a1; j<=b1; j++)
            puck[j]=true;
    }
    for(i=1; i<=q; i++)
    {
        cin>>a[i]>>b[i];

    }
    for(i=l; i<=r; i++)
    {
        k=1;
        while(k<=q)
        {
            f=0;
            for(j=a[k]; j<=b[k]; j++)
            {
                if(puck[j+i])
                {
                    ans++;
                    f=1;
                    break;
                }
            }
            if(f)
                break;
            k++;
        }
    }
    cout<<ans<<endl;




    return 0;
}

