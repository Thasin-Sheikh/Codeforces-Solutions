#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
    a=1;b=2;
    c=(n-3);
    if(c%3==0||c==0)
    {
        b--;
        c++;
    }
   cout<<a<<" "<<b<<" "<<c<<endl;


    return 0;
}

