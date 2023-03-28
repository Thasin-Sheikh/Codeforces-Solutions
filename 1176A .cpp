
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt2,cnt3,cnt5,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cnt2=0,cnt3=0,cnt5=0;
        cin>>n;
        flag=0;
       while(n%2==0)
       {
           n=n/2;
           cnt2++;
       }
       while(n%3==0)
       {
           n=n/3;
           cnt3++;
       }
       while(n%5==0)
       {
           n=n/5;
           cnt5++;
       }

        if(n!=1)
            cout<<-1<<endl;
        else cout<<cnt2+2*cnt3+3*cnt5<<endl;
    }


    return 0;
}
