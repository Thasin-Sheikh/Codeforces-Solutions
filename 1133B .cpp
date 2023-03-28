///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
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
bool prime[1000001];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,k,t,A=0,B=0,L,j,i,l,r,m,n,C=0,ans=0,sum=0,sum1=0;
    vector<ll>v;
    queue<ll>qu;
    map<int,int>mp;
    ll count[1000];
    cin>>n>>k;
    memset(count,0,sizeof(count));
    for(i=0; i<n; i++)
    {
        cin>>aarray[i];
        count[aarray[i]%k]++;
    }
    ans+=count[0]/2;
    for(i=1;i<k;i++)
    {
        if(i+i==k)
        {
            ans+=count[i]/2;
        }
        else
        {
            for(j=i+1;j<k;j++)
            {
                if(i+j==k)
                {
                    ll vc=min(count[i],count[j]);
                    ans+=vc;
                    count[i]-=vc;
                    count[j]-=vc;

                }
            }
        }
    }
    cout<<2*ans<<endl;

    return 0;
}
