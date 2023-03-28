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
vector<ll>primes;
bool fk[1000001];
int main()
{
    makefast__
    string str;
    string pptr;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ll a,b,sum[100000+10],i,m,n,A=0,B,C,D,ans=INT_MIN,E,cst,c,cd,d,j,k,x0,t;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>str;
        ll count[10];
        memset(count,0,sizeof(count));
        for(j=0; j<str.length(); j++)
        {
            C=str[j]-'0';
            count[C]++;
        }
        ll fl=1;
        for(j=0;j<=m;j++)
        {
            if(count[j]==0)
            {
                fl=0;
                break;
            }
        }
        if(fl)
            A++;
    }
    cout<<A<<endl;


}
