/***By the name of Allah***/
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
    ll a,b,c,d,t,n,m,i,j;
    ll first[2],second[2];
    cin>>t;
    while(t--)
    {
        memset(first,0,sizeof(first));
        memset(second,0,sizeof(second));
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            first[abs(a)%2]++;

        }

        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>a;
            second[abs(a)%2]++;

        }
        cout<<first[0]*second[0]+first[1]*second[1]<<endl;
    }

}
