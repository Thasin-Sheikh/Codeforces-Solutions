#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    double n,m,s,a,b,f,c=0,d,ans,r,test,sum=0,sum1=0,i,j,l,array[100000+10];
    string str;
    double db;
    cin>>r>>a>>b>>c>>d;
   test=(a-c)*(a-c)+(b-d)*(b-d);
   n=sqrt(test);
   //cout<<n<<endl;
   ans=ceil(n/(2*r));
   cout<<ans<<endl;

}
