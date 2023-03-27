#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m=1,cnt=1,ans,maxn,minn,count[10000],ar[100000],i,cn=0,start=2;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        count[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        count[i]++;
    }
    for(i=1;; i++)
    {
        m=m+cnt;
        if(m>n)
        {
            if(m%n!=0)
                cout<<m%n<<" ";
            else
                cout<<m%n+1<<" ";
            m=m%n;
            cnt++;
            cn++;
        }
        else
        {
            cout<<m<<" ";
            cnt++;
            cn++;
        }
        if(cn==n-1)
            break;
    }
    cout<<endl;

}
