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
    string str,ptr;
    ll n,m,t,f=0,i,j;
    cin>>n>>m;
    cin>>str;
    //cout<<str<<endl;
    sort(str.begin(),str.end());
    ll ans=0;
    ptr+=str[0];
    ans=ans+(str[0]-'a')+1;
    //cout<<ans<<endl;
    if(n==1)
    {
        //cout<<ptr[0]<<endl;
        cout<<(ptr[0]-'a')+1;
        return 0;
    }
    for(i=1; i<str.length(); i++)
    {
        t=ptr.length();
        //cout<<ptr.size()<<endl;
        if((str[i]-'a')-(ptr[t-1]-'a')>1&&ptr.length()<m)
        {
            ans=ans+(str[i]-'a')+1;
            ptr+=str[i];
        }
         if(ptr.size()==m)
        {
            cout<<ans<<endl;
            return 0;
        }
    }
    //cout<<ptr<<endl;
    //cout<<str.length()<<endl;
cout<<-1<<endl;

}
