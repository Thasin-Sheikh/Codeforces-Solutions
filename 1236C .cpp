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
vector<ll>v;
bool prime[1000001];
vector<ll>ans[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    ll c=1;
    ll p=n;
    k=1;
    while(p--)
    {
        if(c%2)
        {
            for(i=1; i<=n; i++)
            {

                ans[i].push_back(k);
                k++;

            }
            c++;
        }
        else
        {
            for(i=n;i>=1;i--)
            {
                ans[i].push_back(k);
                k++;
            }
            c++;

        }

    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}


