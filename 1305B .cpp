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
    cin>>str;
    vector<ll>a,b,ans;
    string s,ss;
    ll l=0,r=str.size()-1;
    while(l<r)
    {
        while(l<str.length()&&str[l]==')')
        {
            l++;
        }
        while(r>=0&&str[r]=='(')
        {
            r--;
        }
        if(l<r&&l<str.length()&&r>=0)
        {
            a.push_back(l+1);
            b.push_back(r+1);
            r--;
            l++;
        }
    }
    if(a.size()==0)
    {
        cout<<0<<endl;
        return 0;
    }
    cout<<1<<endl;
    cout<<2*a.size()<<endl;
    for(auto c:a)
        cout<<c<<" ";
    reverse(b.begin(),b.end());
    for(auto c:b)
        cout<<c<<" ";
    cout<<endl;


    return 0;
}


