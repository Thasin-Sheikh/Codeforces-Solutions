#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,i,j,p,k,cnt,mh,res,ans=0,b,c,sum=0,ar,alex,array[30],p3,point;
    long long int lfirst,sec,third,mfirst,p2;
    vector<pair<long long int,long long int>>vec;
    char ch [101][101];
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cnt=0;
        for(j=1; j<=m; j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='*')
            {
                vec.push_back(make_pair(i,j));
            }
        }

    }
    for(auto it=vec.begin(); it!=vec.end(); it++)
    {
        for(auto jt=it+1; jt!=vec.end(); jt++)
        {
            if(it->first==jt->first)
            {
                p=it->first;
                break;
            }
        }
    }
    //cout<<p<<endl;
       for(auto it=vec.begin(); it!=vec.end(); it++)
    {
        for(auto jt=it+1; jt!=vec.end(); jt++)
        {
            if(it->first!=jt->first&&it->second==jt->second)
            {
                if(it->first==p)
                {
                    p2=jt->first;
                }
                else p2=it->first;
                //cout<<it->first<<" "<<it->second<<endl;
                //cout<<jt->first<<" "<<jt->second<<endl;
                  point=it->second;
                break;
            }
        }
    }
    for(auto it=vec.begin();it!=vec.end();it++)
       {
           //cout<<it->first<<" "<<it->second<<endl;
           if(it->first==p&&it->second!=point)
           {
               p3=it->second;
           }
       }
   cout<<p2<<" "<<p3<<endl;

 return 0;

}
