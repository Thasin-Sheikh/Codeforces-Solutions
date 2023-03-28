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
/*int primes(ll n)
{
    bool prime[100007];
    memset(prime,true,sizeof(prime));
    prime[0]=prime[1]=false;
    for(i=2;i<=10000;i++)
    {
        if(prime[2])
        {
            for(j=2;i*j<=100001;j++)
                prime[i*j]=false;
        }
    }
}*/
bool vowel( char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        return true;
    else return false;
}
int main()
{
    makefast__
    string str;
    ll i,j,m,a,b,c,d,n,l,t,s,x,p=0,cnt=0,mn;
    cin>>str;
    if(str.length()==1&&(str[0]!='a'&&str[0]!='e'&&str[0]!='i'&&str[0]!='o'&&str[0]!='u'&&str[0]!='n'))
    {
        cout<<"NO"<<endl;
        return 0;
    }

    if(str[str.length()-1]!='a'&&str[str.length()-1]!='e'&&str[str.length()-1]!='i'&&str[str.length()-1]!='o'&&str[str.length()-1]!='u'&&str[str.length()-1]!='n')
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(i=0; i<str.length()-1; i++)
    {
        char ch=str[i];
        if((ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&str[i]!='n')&&!(vowel(str[i+1])))
        {
            //cout<<str[i]<<" "<<str[i+1]<<endl;
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

}
