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
string str;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    ll i,j,n,m,k,t;
    string ptr;
    cin>>t;
    while(t--)
    {
        cin>>str;
        vector<ll>ans;
        for(i=1; i<=12; i++)
        {
            if(12%i==0)
            {
                bool ok=false;
                for(j=0; j<12/i; j++)
                {
                    bool f=true;
                    for(k=0; k<i; k++)
                    {
                        if(str[k*(12/i)+j]=='O')
                            f=false;
                    }
                    if(f)
                        ok=true;
                }
                if(ok)
                    ans.push_back(i);
            }
        }
        cout<<ans.size()<<" ";
        for(i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<'x'<<12/ans[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

