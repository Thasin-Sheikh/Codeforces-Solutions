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
vector<ll>v[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>aarray[i];
        v[aarray[i]].push_back(i+1);
    }
    for(i=1;i<n;i++)
    {
        if(v[aarray[i]].size()!=0)
        {
            ll c=0;
            ll k=aarray[i];
            for(j=0;j<v[k].size();j++)
            {
                if(v[v[k][j]].size()==0)
                {
                    c++;
                }
            }
            if(c<3)
            {
                cout<<"No"<<endl;
                return 0;

            }
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}


