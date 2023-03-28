#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i=0,j,cnt=0,t,ans,flag=1,x,d,sum=0,dif,dp[100][100],f,p=1,c=1;
    char pixel [110][110];
    set<char>sc;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>pixel[i][j];
            sc.insert(pixel[i][j]);

        }
    }
    if(sc.find('C')!=sc.end()||sc.find('M')!=sc.end()||sc.find('Y')!=sc.end())
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;



}
