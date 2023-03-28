#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p=0,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=0,flag,ans;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<long long int>vecs;
    vector<long long int>vi;
    stack<long long int>stck;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        if(array[i]>0)
        {
            sum=sum+array[i];
        }
        if(array[i]<0)
            p=p+(-1*array[i]);


    }
    sum1=sum+p;
    cout<<sum1<<endl;

}

