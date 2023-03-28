
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[100000+10],ar[100000],q,sum1=0,cnt=0,sum=INT_MIN,flag,ans;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>array[i];
        }
        ans=array[0];
        for(i=1; i<n; i++)
        {

           if(array[i]!=0)
           {
               p=min(array[i],m/i);
               ans=ans+p;
               m=m-i*p;

           }
           if(m<i)
            break;

        }
        cout<<ans<<endl;

    }


    return 0;
}
