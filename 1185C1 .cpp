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
    cin>>n>>t;
    vector<ll>ans;
    ll sum=0;
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
        sum+=aarray[i];
        if(sum<=t)
        {
            ans.push_back(0);
        }
        else
        {
            vector<ll>num;
            for(j=1; j<i; j++)
            {
                num.push_back(aarray[j]);
            }
            sort(num.rbegin(),num.rend());
            ll s=0,c=0;
            for(j=0; j<num.size(); j++)
            {
                s+=num[j];
                c++;
                if(sum-s<=t)
                {
                    ans.push_back(c);
                    break;
                }
            }
        }
    }
    for(i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}


