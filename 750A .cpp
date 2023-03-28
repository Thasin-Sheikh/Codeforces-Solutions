
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=5,b,c,d,n,m,i=1,j,p,t,k,f,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n>>m;
    f=240-m;
   // cout<<f<<endl;
    while(f>=a)
    {
        f=f-a;
        //cout<<f<<endl;
        i++;
        cnt++;
        a=5*i;
     //   cout<<f<<endl;
        if(cnt==n)
            break;
    }
   cout<<cnt<<endl;

    return 0;
}
