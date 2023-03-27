///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
int main()
{
    makefast__
    ll str,ptr,array[100001],br[100001];
    ll n,m,t,f=0,i,j,flag;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>array[i];
        br[i]=array[i];
    }
    sort(br,br+n+1);
    t=br[1];
    for(i=1;i<=n;i++)
    {
        if(array[i]==t)
        {
            f++;
            flag=i;
        }
    }
    if(f==1)
        cout<<flag<<endl;
    else cout<<"Still Rozdil"<<endl;

}
