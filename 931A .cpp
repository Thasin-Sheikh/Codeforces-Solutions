#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,array[100000+10],a,b,i,cnt=0,j,p,k=0,sum=0;
    vector<pair<long long int,long long int>>vp;
    long long int count[100000];
    memset(count,0,sizeof(count));
    cin>>a>>b;
    p=abs(a-b);
    //cout<<p<<endl;
    if(p>2)
    {
        if(p%2!=0)
        {
            m=p-2;
            sum=sum+2;
            for(i=1,j=2; i<=m/2; i++)
            {
                sum=sum+j;
                j++;
            }
            sum=sum*2;
            sum=sum+ceil(m/2);
        }
        else
        {
            sum=sum;
            for(i=2; i<=p/2; i++)
            {
                sum=sum+i;
                //cout<<i<<" ";
            }
         //   cout<<sum<<endl;
            sum=sum*2;
            sum=sum+2;
        }
    }
    //cout<<sum<<endl;
    if(p==1)
        cout<<1<<endl;
    else if(p==2)
        cout<<2<<endl;
    else
        cout<<sum<<endl;


}
