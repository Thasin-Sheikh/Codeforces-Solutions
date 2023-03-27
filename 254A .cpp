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
ll aarray[600000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[3000001];
vector<ll>v[600000+10];
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    for(i=0; i<2*n; i++)
    {
        cin>>aarray[i];
        v[aarray[i]].push_back(i+1);
    }
    sort(aarray,aarray+n);
    vector<ll>ans;
    for(i=0; i<2*n; i++)
    {
        if(v[aarray[i]].size()%2!=0)
        {
            cout<<-1<<endl;
            return 0;
        }
        else
        {
            while(!v[aarray[i]].empty())
            {
                ans.push_back(v[aarray[i]].back());
                v[aarray[i]].pop_back();
            }
        }
    }
    ll c=0;
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i];
        c++;
        if(c%2==0)
            cout<<endl;
        else cout<<" ";
    }
    return 0;
}


