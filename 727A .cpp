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
    ll i,j,n,m,a,b,k,t;
    cin>>a>>b;
    vector<ll>ans;
    ans.push_back(b);
    /*if(b<10&&a*2!=b)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(b<10&&a*2==b)
    {
        cout<<"YES"<<endl;
        cout<<2<<endl;
        cout<<a<<" "<<b<<endl;
        return 0;
    }*/
    while(b>a)
    {
        ll k=b%10;
        if(k!=1&&k!=0&&k%2!=0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        if(b%2==0)
        {
            //ans.push_back(b);
            b/=2;
        }
        else
        {
            stringstream s1;
            s1<<b;
            string ss;
            ss=s1.str();
            ss.pop_back();
            stringstream g(ss);
            g>>b;
        }
        ans.push_back(b);
    }
    //cout<<b<<endl;
    if(b!=a)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    sort(ans.begin(),ans.end());
    for(i=1;i<ans.size()-1;i++)
    {
        m=ans[i]%10;
        if(m!=0&&m%2!=0&&m!=1)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
    cout<<"YES"<<endl;
    cout<<ans.size()<<endl;
    for(i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    return 0;
}


