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
string str="abacaba";
ll scnt( string s)
{
    ll i,c=0;
    for(i=0; i<s.length()-6; i++)
    {
        if(s.substr(i,str.size())==str)
            c++;
    }
    return c;

}
void solve()
{
    ll i,n,j;
    string s;
    cin>>n;
    cin>>s;
    bool f=false;
    for(i=0; i+str.length()<=n; i++)
    {
        string sr=s;
        bool yes=true;
        for(j=0; j<str.size(); j++)
        {
            if(sr[i+j]!='?'&&sr[i+j]!=str[j])
            {
                yes=false;
                break;
            }
            sr[i+j]=str[j];
        }
        if(yes&&scnt(sr)==1)
        {

            for(j=0; j<n; j++)
            {
                if(sr[j]=='?')
                {
                    sr[j]='z';

                }
            }
            f=true;
            cout<<"YES"<<endl;
            cout<<sr<<endl;
            break;
        }
    }
    if(f==false)
    {
        cout<<"NO"<<endl;
        return ;
    }




}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}


