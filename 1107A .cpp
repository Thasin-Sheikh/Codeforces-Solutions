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
    char ch;
    ll i=0,j,ans=0,m,a,b,c=1,d,n,l,t,s,x,p=0;
    cin>>t;
    while(t--)
    {
        set<ll>se;
        cin>>m;
        cin>>str;
        for(i=0; i<str.length(); i++)
            se.insert(str[i]-'0');
        if(se.size()==1&&str.length()==2)
            cout<<"NO"<<endl;
        else if(str.length()==2&&str[1]<str[0])
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<2<<endl;

            cout<<str[0]<<" ";
            for(i=1; i<str.length(); i++)
                cout<<str[i];
            cout<<endl;
        }

    }
}
