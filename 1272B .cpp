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
    string str;
    cin>>str;
    string ans;
    ll u=0,d=0,r=0,l=0;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='U')
            u++;
        else if(str[i]=='D')
            d++;
        else if(str[i]=='L')
            l++;
        else r++;
    }
    if(u==0||d==0)
    {
        if(r&&l)
        {
            cout<<2<<endl;
            cout<<"RL"<<endl;
            return ;
        }
        else
        {
            cout<<0<<endl;
            return ;
        }
    }
    if(l==0||r==0)
    {
        if(u&&d)
        {
            cout<<2<<endl;
            cout<<"UD"<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        return ;
    }
    ll total;
    total=min(l,r)+min(u,d);
    cout<<2*total<<endl;
    k=min(r,l);
    while(k)
    {
        cout<<'R';
        k--;
    }
    k=min(u,d);
    while(k)
    {
        cout<<'D';
        k--;
    }
    k=min(r,l);
    while(k)
    {
        cout<<'L';
        k--;
    }
    k=min(u,d);
    while(k)
    {
        cout<<'U';
        k--;
    }
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


