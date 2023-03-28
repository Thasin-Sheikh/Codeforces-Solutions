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
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;
        ll c=0;
        vector<ll>v;
        set<ll>sl;
        ll o=0,z=0;
        for(i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
                z++;
                if(o)
                {
                    o--;
                }
                v.push_back(z);
            }
            else
            {
                o++;
                if(z)
                {
                    v.push_back(z);
                    z--;
                }
                else
                    v.push_back(o);
            }
            sl.insert(o);
            sl.insert(z);
        }
        cout<<sl.size()-1<<endl;
        for(i=0;i<str.length();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }

    return 0;
}


