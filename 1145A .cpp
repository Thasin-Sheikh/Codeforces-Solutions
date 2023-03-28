#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
using ll=long long ;
ll flag=0;
ll ar[100];
bool sorted(ll l,ll r )
{
    bool b=true;
    for(ll i=l+1; i<=r; i++)
    {
        if(ar[i]<ar[i-1])
            b=false;
    }
    return b;

}
void thanos( ll l,ll r)
{
    if(sorted(l,r))
    {
        flag=max(flag,r-l+1);
        return ;
    }
    ll mid=(l+r)/2;
    thanos(l,mid);
    thanos(mid+1,r);
}
int main()
{
    ll i,j,n,m,array[1000];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>ar[i];
    }
    thanos(1,n);
    cout<<flag<<endl;
    return 0;


}


