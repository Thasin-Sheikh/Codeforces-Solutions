#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
using ll=long long ;
int main()
{
    ll a,b,i,n,m,t,sum=0,array[100000+10],jor=0,bjor=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        if(array[i]%2==0)
            jor++;
        else bjor++;
    }
    sort(array,array+n);
    if(jor==bjor||jor+1==bjor||bjor+1==jor)
    {
        cout<<0<<endl;
        return 0;
    }
    m=min(jor,bjor);
    a=m;
    for(i=n-1; i>=0; i--)
    {
        if(array[i]%2==0&&m)
        {
            array[i]=0;
            m--;
        }
        else if(array[i]%2!=0&&a)
        {
            array[i]=0;
            a--;
        }
    }
    sort(array,array+n);
    for(i=0; i<=n; i++)
    {
        sum=sum+array[i];

    }
    sum-=array[n-1];
    cout<<sum<<endl;


}
