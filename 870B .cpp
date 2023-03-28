
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
    ll a,b,c,d,e,f,x,k,y,t,A=INT_MAX,B=INT_MAX,L,j,i,l,r,m,n,C=0,ans=INT_MIN,sum=INT_MAX,sum1=INT_MAX;
    vector<ll>v,v1;
    queue<ll>qu;
    cin>>n>>k;
    for(i=0; i<n; i++)
    {
        cin>>aarray[i];
        v.push_back(aarray[i]);
    }
    sort(v.begin(),v.end());
    if(k==1)
    {
        cout<<v[0]<<endl;
        return 0;
    }
    if(k>=3)
    {
        cout<<v.back()<<endl;
        return 0;
    }

    //cout<<in<<endl;
    ll minarrray[100000+10],maxarray[100000+10];
    minarrray[0]=aarray[0];
    maxarray[n-1]=aarray[n-1];
    for(i=1; i<n; i++)
        minarrray[i]=min(minarrray[i],minarrray[i-1]);
    for(i=n-2; i>=0; i--)
    {
        maxarray[i]=(maxarray[i],maxarray[i+1]);
    }
    for(i=0; i<n-1; i++)
    {
        ans=max(ans,max(minarrray[i],maxarray[i+1]));
    }
    cout<<ans<<endl;









    return 0;
}
