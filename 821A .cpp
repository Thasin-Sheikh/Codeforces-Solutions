#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c=0,d=0,m,i,n,j,p,t=0,k,array[101][101],ar[100000],q,sum1=0,cnt=0,sum=0,flag,ans,f=0,l;
    long long int st,ct,qt;
    string str,ptr,sp[5000];
    set<pair<long long int,long long int>>vecs;
    vector<long long int>vi(100000,0);
    stack<long long int>stck;
    vector<char>vc;
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
            if(array[i][j]>1)
            {
                flag=0;
                //cout<<i<<" "<<j<<endl;
                for(k=1; k<=n; k++)
                {
                    for(p=1; p<=n; p++)
                    {
                        //cout<<array[i][k]<<" "<<array[j][p]<<endl;
                        if(array[i][k]+array[p][j]==array[i][j])
                        {
                            flag=1;
                            continue;
                        }
                    }
                }
                if(flag==0)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;

}
