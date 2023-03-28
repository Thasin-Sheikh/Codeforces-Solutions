#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i=0,j,cnt=0,cnt1=0,t,k,ans,flag,x,d,sum=0,dif,array[100000+10],f,p=1,minn,a,b,c=0;
    char pixel [110][110];
    long long int count[110][110];
    vector<long long int>v,vec;
    memset(count,0,sizeof(count));
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>pixel[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        flag=1;
        for(j=1; j<=m; j++)
        {
            if(pixel[i][j]=='S')
            {
                flag=0;
                break;
            }
        }
        if(flag)
            v.push_back(i);
    }
    for(i=1; i<=m; i++)
    {
        flag=1;
        for(j=1; j<=n; j++)
        {
            if(pixel[j][i]=='S')
            {
                flag=0;
                break;
            }
        }
        if(flag)
            vec.push_back(i);
    }
    for(k=0; k<v.size(); k++)
    {
        i=v[k];
        for(j=1; j<=m; j++)
        {
            if(pixel[i][j]=='.')
            {
                cnt++;
                pixel[i][j]='0';
            }
        }
    }
   // cout<<cnt<<endl;
    /*for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<pixel[i][j];
        }
        cout<<endl;
    }*/

    for(k=0; k<vec.size(); k++)
    {
        i=vec[k];
        for(j=1; j<=n; j++)
        {
            //cout<<pixel[j][i]<<" ";
            if(pixel[j][i]=='.')
            {
                cnt1++;
            }
        }
    }
    cout<<cnt1+cnt<<endl;

}
