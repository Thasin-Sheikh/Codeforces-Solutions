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
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    vector<ll>ans;
    ans.push_back(n);
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            k=ans[ans.size()-1];
            m=max(i,n/i);
            ll mm=min(i,n/i);
            if(k%m==0&&m%mm==0&&m!=mm)
            {
                ans.push_back(m);
                ans.push_back(mm);
            }
            else
            {
                ans.push_back(m);
            }
        }
    }
    sort(ans.rbegin(),ans.rend());
    if(ans[ans.size()-1]!=1)
        ans.push_back(1);
    for(auto c:ans)
        cout<<c<<" ";
    cout<<endl;

    return 0;
}


