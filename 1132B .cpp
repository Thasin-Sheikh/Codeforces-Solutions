///*BY The Name Of ALLAH***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    makefast__
    string str,ptr,ps[1001],s[1001];
    ll n,m,a,j,k,i,p,l=1,u=0,r=0,c,array[300000+10],d,ar[300000+10];
    set<ll>ds;
    char ch;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
        u=u+array[i];

    }
    sort(array,array+n);
    cin>>m;
    for(i=0;i<m;i++){
        cin>>ar[i];

        }
        for(i=0;i<m;i++)
        {
            p=ar[i];
            ll cn=0;
            ll sum;
            c=n-p;
            sum=u-array[c];
            ar[i]=sum;

        }

  for(i=0;i<m;i++)
    cout<<ar[i]<<endl;
}
