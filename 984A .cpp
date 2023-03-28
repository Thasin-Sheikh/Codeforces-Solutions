#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>array[i];
    sort(array,array+n);
    //for(i=0; i<n; i++)
      //  cout<<array[i]<<" ";
    if(n==1)
        cout<<array[0]<<endl;
    else if(n%2!=0)
        cout<<array[n/2]<<endl;
    else
        cout<<array[(n/2)-1]<<endl;

}

