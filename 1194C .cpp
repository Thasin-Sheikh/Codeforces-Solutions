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
    string s1,s2,s3;
    ll i,j;
    ll cnt[30]= {0},cnt2[30]= {0};
    cin>>s1>>s2>>s3;
    /*if(s1[0]!=s2[0]&&s3.find(s2[0])==s3.npos)
    {
        cout<<"NO"<<endl;
        return ;
    }*/
    if(s1==s2)
    {
        cout<<"YES"<<endl;
        return ;
    }
    string ans;
    for(i=0; i<s3.length(); i++)
    {
        cnt[s3[i]-'a']++;
    }
    ll k=0;
    for(i=0; i<s2.length(); i++)
    {
        if(s2[i]==s1[k])
        {
            ans+=s2[i];
            k++;
        }
        else
        {
            if(cnt[s2[i]-'a']>0)
            {
                ans+=s2[i];
            }
            cnt[s2[i]-'a']--;
        }
    }
    //cout<<k<<endl;
    for(; k<s1.length(); k++)
        ans+=s1[k];
    if(ans==s2)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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


