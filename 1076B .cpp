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
    ll n,m,i,j,ans,array[100010],ma,t,cnt=0,two=2,minn=INT_MIN;
    ll count[10000];
    string str,ptr;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
        return 0;
    }
    if(n%2!=0)
    {
        if(n%3==0)
        {
            //cout<<1<<endl;
            n=n-3;
            cnt++;
            cnt=cnt+n/2;
            cout<<cnt<<endl;
            return 0;

        }
        else if(n%5==0)
        {
            n=n-5;
            cnt++;
            cnt=cnt+n/2;
            cout<<cnt<<endl;
            return 0;
            //cout<<2<<endl;

        }
        else if(n%7==0)
        {
            n=n-7;
            cnt++;
            cnt=cnt+n/2;
            cout<<cnt<<endl;
            return 0;
            //cout<<3<<endl;

        }
        else

        {
            for(i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    //cout<<i<<endl;
                    n=n-i;
                    cnt++;
                    cnt=cnt+n/2;
                    cout<<cnt<<endl;
                    return 0;
                }

            }
        }

    }
    cout<<1<<endl;

}
