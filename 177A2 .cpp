
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,p,t,k,array[110][110],ar[100000],q,sum=0,cnt=0,flag;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vecc;
    stack<long long int>stck;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>array[i][j];

        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j)
            {
                sum=sum+array[i][j];
                array[i][j]=0;
            }
            if((i==(n+1)/2||j==(n+1)/2)&&array[i][j]!=0)
            {

                sum=sum+array[i][j];
                array[i][j]=0;
            }
            if((i+j==n+1)&&array[i][j]!=0)
            {
                sum=sum+array[i][j];
                array[i][j]=0;
            }


        }

    }
    cout<<sum<<endl;
    return 0;
}
