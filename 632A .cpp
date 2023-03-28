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
using dl = long double;
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
    string str,s1="half",s2="halfplus";
    ll i,j,n,k,t;
    cin>>n>>k;
    vector<dl>ans;
    vector<string>input;
    for(i=0; i<n; i++)
    {
        cin>>str;
        input.push_back(str);
    }
    reverse(input.begin(),input.end());
    ans.push_back(0.5);
    dl m=0.5;
    for(i=1; i<input.size(); i++)
    {
        if(input[i]==s1)
        {
            m=m*2;
            ans.push_back(m);
        }
        else
        {
            m=m*2+0.5;
            ans.push_back(m);
        }
    }
    ll sum=0;
    for(i=0; i<ans.size(); i++)
    {
        sum+=ans[i]*k;
    }
    cout<<sum<<endl;


    return 0;
}


