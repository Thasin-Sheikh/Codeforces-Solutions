#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1,cnt=0,sum,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        p=a;
        k=b;
        d=c;
        sum=0,sum1=0;
        while(a>=1&&b>=2)
        {
            a=a-1;
            b=b-2;
            sum=sum+3;
        }
        while(b>=1&&c>=2)
        {
            c=c-2;
            b=b-1;
            sum=sum+3;
        }
         while(k>=1&&d>=2)
        {
            k=k-1;
            d=d-2;
            sum1=sum1+3;
        }
        while(p>=1&&k>=2)
        {
            k=k-2;
            p=p-1;
            sum1=sum1+3;
        }
        cout<<max(sum,sum1)<<endl;
    }


    return 0;
}

