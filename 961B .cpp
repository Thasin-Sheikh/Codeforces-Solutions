///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
ll type[150000];
vector<ll>primes;
bool fk[1000001];
ll flag[100000+10];
ll bal[100000+10];
ll sum[200000+10];
int main()
{
    makefast__
    string str;
    string pptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,i,m,n,A=0,B=0,C=0,x,D=0,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>v;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
    }
    sum[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>bal[i];
        if(bal[i]==1)
        {
            A+=aarray[i];
            sum[i]=sum[i-1];
        }
        else
        {
            v.push_back(aarray[i]);
            sum[i]=sum[i-1]+aarray[i];
        }
    }
    for(i=k;i<=n;i++)
    {
        x=sum[i]-sum[i-k];
        //cout<<x<<" ";
        B=max(B,x);
    }
    cout<<(A+B)<<endl;

}
