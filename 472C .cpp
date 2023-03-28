///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
#define MAX 1e6+10
#define MOD 1000000007
#define PI 3.14159265359
#define makefast__  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using ll=long long int  ;
using dl =double;
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
string f[100000+10],l[100000+10];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t;
    cin>>n;
    vector<string>v1,v2;
    for(i=1; i<=n; i++)
    {
        cin>>f[i]>>l[i];
    }
    for(i=1; i<=n; i++)
    {
        cin>>aarray[i];
    }
    if(f[aarray[1]]<l[aarray[1]])
    {
        v1.push_back(f[aarray[1]]);
    }
    else
    {
        v1.push_back(l[aarray[1]]);
    }
    for(i=2; i<=n; i++)
    {
        k=aarray[i];
        if(f[k]<l[k])
        {
            string ss=v1[v1.size()-1];
            if(ss<=f[k])
            {
                v1.push_back(f[k]);
            }
            else
            {
                v1.push_back(l[k]);

            }
        }
        else
        {
            string ss=v1[v1.size()-1];
            if(ss<=l[k])
            {
                v1.push_back(l[k]);
            }
            else
            {
                v1.push_back(f[k]);

            }
        }
    }

    v2=v1;
    sort(v2.begin(),v2.end());
    if(v1<=v2)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}



