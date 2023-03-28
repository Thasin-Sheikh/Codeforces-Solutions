#include<bits/stdc++.h>
using namespace std;
int main()
{
    int   a,b,c=0,d=0,m,n,p,t=0,k,array[100000+10],q,sum1=0,cnt=1,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt,i,j;
    double arr[100000];
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
    set<char>sc;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    for(i=0; i<n; i++)
    {
        if(array[i]%2==0)
        {
            arr[i]=array[i]/2;
        }
        else if(array[i]%2!=0&&cnt%2!=0)
        {
            arr[i]=floor(array[i]/2.0);
            cnt++;
        }
        else if(array[i]%2!=0&&cnt%2==0)
        {
            arr[i]=ceil(array[i]/2.0);
            cnt++;
        }
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]==-0)
            cout<<0<<" ";
        else
            cout<<arr[i]<<" ";
    }


}
