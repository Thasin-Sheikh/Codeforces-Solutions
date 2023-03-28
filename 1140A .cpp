#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,array[100000+10],a,b,i,cnt=0,j,p,k=0;
    vector<pair<long long int,long long int>>vp;
    long long int count[100000];
    memset(count,0,sizeof(count));
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>array[i];
    }
    for(i=1; i<=n; i++)
    {
        if(count[i]==0)
            k++;
        for(j=i; j<=array[i]; j++)
            count[j]=1;


    }
    cout<<k<<endl;

}
