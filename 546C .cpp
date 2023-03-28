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
    ll i,j,n,m,k,t,a,num1,num2;
    queue<ll>fc,sc;
    cin>>n;
    cin>>k;
    for(i=1;i<=k;i++)
    {
        cin>>a;
        fc.push(a);
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a;
        sc.push(a);
    }
    ll c=0;
    while(sc.size()!=0||fc.size()!=0)
    {
        num1=fc.front();
        num2=sc.front();
        if(num1>num2)
        {
            sc.pop();
            fc.pop();
            fc.push(num2);
            fc.push(num1);
        }
        else
        {
            fc.pop();
            sc.pop();
            sc.push(num1);
            sc.push(num2);
        }
        c++;
        if(sc.size()==0)
        {
            cout<<c<<" "<<1<<endl;
            return 0;
        }
        if(fc.size()==0)
        {
            cout<<c<<" "<<2<<endl;
            return 0;
        }
        if(c>10000)
        {
            cout<<-1<<endl;
            return 0;
        }
    }

    return 0;
}


