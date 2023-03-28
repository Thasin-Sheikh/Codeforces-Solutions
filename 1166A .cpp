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
int fact(long long int   n)
{
    long long int  ft[100000];
    ft[0]=ft[1]=1;
    for(int  i=2; i<=n; i++)
    {
        ft[i]=ft[i-1]*i;
    }
    return ft[n];
}
int main()
{
    makefast__
    int  t,n,m,i,a,j;
    string str;
    int  count[26];
    memset(count,0,sizeof(count));
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>str;
        count[str[0]-'a']++;
    }
    int  ans=INT_MIN;
    long long int an1=0,an2=0;
    for(i=0; i<26;)
    {
        if(count[i]==0)
        {
            i++;
        }
        else
        {
            //cout<<count[i]<<" ";
            long long int   p=count[i];
            long long int dc=p/2;
            long long int vc=p/2;
            if(p%2!=0)
                dc++;
            an1=an1+(dc*(dc-1))/2;
            an2=an2+(vc*(vc-1))/2;
            i++;
        }
    }

    cout<<an1+an2<<endl;

}
