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
    cin>>n;
    cin>>str;
    ll sum=0,ss=0;
    ll tot=0;
    set<char>sc;
    for(i=0;i<str.length();i++)
    {
        tot+=str[i]-'0';
        sc.insert(str[i]);
    }
    if(sc.size()==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=0;i<str.length()-1;i++)
    {
        sum+=str[i]-'0';
        j=i+1;
        vector<ll>v;
        ll c=0;
        while(j<str.length())
        {
            ss=0;
            for(;j<str.length();j++)
            {
                ss+=str[j]-'0';
                if(ss==sum)
                {
                    c++;
                    break;
                }
            }
            j++;
            //cout<<i<<" "<<j<<" "<<ss<<endl;
        }
        //cout<<sum<<" "<<c<<endl;
        if(sum+c*sum==tot&&sum!=tot)
        {
            //cout<<sum<<endl;
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}


