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
    string str,ptr,ps[1001],s[1001];
    ll n,m,a,j,k,i,p=0,l=1,u=0,r=0,c=0,array[1000],d,flag,b;
    set<ll>ds;
    vector<ll>vint;
    cin>>n;
    cin>>a>>b;
    if(b>a)
    {
        vint.push_back(b);
        flag=b;
    }
    else
    {
        vint.push_back(a);
        flag=a;
    }
    for(i=1; i<n; i++)
    {
        cin>>a>>b;
        if(a<=flag&&b<=flag)
        {
            vint.push_back(max(b,a));
            flag=max(a,b);

        }
        else if(a<=flag)
        {
            vint.push_back(a);
            flag=a;
        }
        else if(b<=flag)
        {
            vint.push_back(b);
            flag=b;
        }
    }
    if(vint.size()<n)
        cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}
