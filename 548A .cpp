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
using ull=unsigned long long;
const int N = 2e5 + 10;
ll aarray[N];
ll magic[505][505];
vector<ll>primes;
bool ok[1000001];
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    makefast__
    string str;
    ll i,j,n,m,k,t,c=0;
    cin>>str;
    cin>>n;
    ll len=str.length();
    if(len%n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    k=len/n;
    string s1,s2;
    for(i=0;i<str.length();i++)
    {
        s1+=str[i];
        c++;
        if(c==k||i==str.length()-1)
        {
            s2=s1;
            reverse(s2.begin(),s2.end());
            if(s2!=s1)
            {
                cout<<"NO"<<endl;
                return 0;
            }
            s2.clear();
            s1.clear();
            c=0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}



