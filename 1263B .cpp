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
    string str[100];
    ll i,j,n,m,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<string>sl;
        for(i=1;i<=n;i++)
        {
            cin>>str[i];
            sl.insert(str[i]);
        }
        ll ans=0;
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(str[i]==str[j])
                {
                    char ch='0';
                    ans++;
                    string ss;
                    ss=str[j];
                    while(sl.find(ss)!=sl.end())
                    {
                        ss[3]=ch;
                        ch++;
                    }
                    str[j]=ss;
                    sl.insert(ss);
                }
            }
        }
        cout<<ans<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<str[i]<<endl;
        }
    }

    return 0;
}


