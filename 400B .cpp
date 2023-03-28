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
    string str[10001];
    ll a,b,c,d,e,f,x,y,k,t,A=0,mod,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v,v1;
    queue<ll>qu;
    set<ll>sl;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>str[i];
    }
    ll in;
    x=INT_MAX;
    for(i=0; i<n; i++)
    {
        ll fl=0;
        for(j=0; j<m; j++)
        {
            f=0;
            if(str[i][j]=='G')
            {
                in=0;
                fl=1;
                for(k=j;k<m;k++)
                {
                    if(str[i][k]=='S')
                    {
                        in=1;
                        ll ds=k-j;
                        sl.insert(ds);
                    }
                }
                if(in==0)
                {
                    cout<<-1<<endl;
                    return 0;
                }
                break;
            }
        }
    }
     cout<<sl.size()<<endl;




    return 0;
}
