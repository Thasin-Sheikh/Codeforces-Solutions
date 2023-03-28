///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
#include<math.h>
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
    string ptr,str,uni="ACGT";
    ll n,i,j,p=0,m,after,mark=0;
    vector<ll>cv;
    char ch;
    cin>>n;
    cin>>ptr;
    if(n%4!=0)
    {
        cout<<"==="<<endl;
        return 0;
    }
    for(i=0; i<ptr.length(); i++)
    {
        if(ptr[i]=='?')
            mark++;
    }
    ll a=0,c=0,g=0,t=0;
    for(i=0; i<ptr.length(); i++)
    {
        if(ptr[i]=='A')
            a++;
        else  if(ptr[i]=='C')
            c++;
        else if(ptr[i]=='G')
            g++;
        else if(ptr[i]=='T')
            t++;
    }
    if(mark==0&&(a<n/4||c<n/4||g<n/4||t<n/4))
    {
        cout<<"==="<<endl;
        return 0;
    }
    if(a>n/4||c>n/4||g>n/4||t>n/4)
    {
        cout<<"==="<<endl;
        return 0;

    }
    for(i=0; i<ptr.length(); i++)
    {
        if(ptr[i]=='?'&&a<n/4)
        {
            ptr[i]='A';
            a++;
        }
        else if(ptr[i]=='?'&&c<n/4)
        {
            ptr[i]='C';
            c++;
        }
        else if(ptr[i]=='?'&&g<n/4)
        {
            ptr[i]='G';
            g++;
        }
        else  if(ptr[i]=='?'&&t<n/4)
        {
            ptr[i]='T';
            t++;
        }
    }
    if(n==4&&mark==0)
    {
        cout<<ptr<<endl;
        return 0;
    }
    cout<<ptr<<endl;


}
