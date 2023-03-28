/***By the name of Allah***/
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long ;
using dl =long double;
int main()
{
    makefast__
    ll t,n,m,i,a;
    cin>>t;
    while(t--)
    {

        vector<ll>div,array;
        ll f=1;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            array.push_back(a);
        }
        sort(array.begin(),array.end());
        m=array[n-1];
        ll m1=array[0];
        ll ans=m*m1;
        //cout<<ans<<endl;
        for(i=2; i*i<=ans; i++)
        {
            if(ans%i==0)
            {
                div.push_back(i);
                if(i!=ans/i)
                    div.push_back(ans/i);
            }


        }
        sort(div.begin(),div.end());
      if(array==div)
      cout<<ans<<endl;
      else cout<<-1<<endl;

    }

}
