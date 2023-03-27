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
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    for(i=1;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<=n;k++)
            {
                if(aarray[i]+aarray[j]==aarray[k])
                {
                    cout<<k<<" "<<j<<" "<<i<<endl;
                    return 0;
                }
                else if(aarray[i]+aarray[k]==aarray[j])
                {
                    cout<<j<<" "<<i<<" "<<k<<endl;
                    return 0;
                }
                else if(aarray[j]+aarray[k]==aarray[i])
                {
                    cout<<i<<" "<<j<<" "<<k<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<-1<<endl;

    return 0;
}


