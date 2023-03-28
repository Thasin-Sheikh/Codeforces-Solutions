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
void solve()
{
    ll i,j,n,m,k;
    string s1,s2;
    cin>>n;
    cin>>s1>>s2;
    vector<ll>v;
    if(s1==s2)
    {
        cout<<0<<endl;
        return ;
    }
    for(i=s1.length()-1; i>0; i--)
    {
        if(s1[i]!=s2[i])
        {
            if(s1[i]!=s1[0])
            {
                v.push_back(1);
                s1[0]=s1[i];
            }
            v.push_back(i+1);
            for(j=0; j<=i; j++)
            {
                if(s1[j]=='0')
                    s1[j]='1';
                else
                    s1[j]='0';
            }
            reverse(s1.begin(),s1.end()-(n-i-1));
        }
        //cout<<s1<<endl;
    }
    //cout<<s1<<endl;
    if(s1[0]!=s2[0])
        v.push_back(1);
    cout<<v.size()<<" ";
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;

}
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
        solve();

    }

    return 0;
}


