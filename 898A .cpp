#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    cin>>n;
    if(n%10==0){
        cout<<n<<endl;
        return 0;
    }
    a=n%10;
    b=10-a;
    if(n<=5)
        cout<<0<<endl;
    else if(b<a)
        cout<<n+b<<endl;
    else cout<<n-a<<endl;


}
