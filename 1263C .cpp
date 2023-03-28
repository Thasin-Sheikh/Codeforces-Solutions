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
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>v;
        set<ll>sl,ans;
        ans.insert(0);
        ans.insert(1);
        ans.insert(n);
        for(i=2; i<=sqrt(n); i++)
        {
            k=n/i;
            if(sl.find(i)==sl.end())
            {
                ans.insert(i);
                sl.insert(i);
                if(sl.find(k)==sl.end())
                {
                    ans.insert(k);
                    sl.insert(k);
                }
            }
        }
        cout<<ans.size()<<endl;
        for(auto it=ans.begin();it!=ans.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    return 0;
}


