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
int main()
{
    makefast__
    string str;
    string pptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,sum[200000+10],i,m,n,A=0,B=0,C,D=0,E,cst,c,cd,d,j,k,x0,t;
    vector<ll>v;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        sum[aarray[i]]=i;
    }
    cin>>m;
    for(i=0;i<m;i++)
    {
       cin>>b;
       A+=sum[b];
       C=n-sum[b]+1;
       B+=C;

    }
    cout<<A<<" "<<B<<endl;



}
