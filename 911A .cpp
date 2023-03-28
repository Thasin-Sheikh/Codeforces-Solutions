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
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
bool fk[100000];
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
int main()
{
    makefast__
    vector<string>str;
    string pptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,sum[200000+10],i,m,n,A=INT_MAX,B,C,D,ans=0,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>v;
    ll l1,r1,l2,r2;
    cin>>n;
    E=INT_MAX;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        if(aarray[i]<E)
        {
            E=aarray[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        if(aarray[i]==E)
        {
            if(ans==0)
            {
                ans=i;
            }
            else
            {
                A=min(A,i-ans);
                ans=i;
            }
        }

    }
    cout<<A<<endl;

}
