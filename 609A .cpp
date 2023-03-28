#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=0,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    cin>>n;
    for(i=0;i<t;i++)
        cin>>array[i];
    sort(array,array+t);
    for(i=t-1;i>=0;i--)
    {
        if(sum>=n)
            break;
        sum=sum+array[i];
        cnt++;
    }
   cout<<cnt<<endl;

    return 0;
}

