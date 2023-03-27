#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i=0,j,cnt=0,cnt1=0,t,k,ans,flag,x,d,sum=0,dif,array[100000+10],f,p=1,minn,a,b,c=0;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    memset(prime,true,sizeof(prime));
    cin>>n>>m;
    prime[1]=false;
    prime[0]=false;
    for(i=2; i<=100001; i++)
    {
        if(prime[i]==true)
        {
            for(j=2; i*j<1000001; j++)
            {
            prime[i*j]=false;
            }
        }
    }
    for(i=n+1;i<m;i++)
    {
        if(prime[i]==true)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(prime[n]==false||prime[m]==false)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;





}
