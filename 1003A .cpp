#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,n,m,i,j,p,t,k=2,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<string,string>>vecs;
    vector<char>vecc;
    stack<long long int>stck;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    p=array[0];
    array[n]=INT_MIN;
    for(i=1; i<=n; i++)
    {
        if(array[i]==p)
            cnt++;
        else
        {
            sum=max(sum,cnt);
            cnt=0;
            p=array[i];
        }
        //cout<<p<<endl;
    }
    if(n==1)
        cout<<1<<endl;
    else
        cout<<sum+1<<endl;

}
