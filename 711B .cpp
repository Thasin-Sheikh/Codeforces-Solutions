///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll magic[501][501];
int main()
{
    makefast__
    string ptr,str,uni;
    ll candy=0,move=0,m,n,i,j,sum1,sum,a,b,r,s=0,rs;
    set<ll>vp;
    vector<ll>ind;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cin>>magic[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        sum1=0;
        a=0;
        for(j=1; j<=n; j++)
        {
            if(magic[i][j]==0)
            {
                r=i;
                a=1;
            }
            sum1+=magic[i][j];
        }
        if(!a)
        {
            sum=sum1;
        }
    }
    for(i=1; i<=n; i++)
    {
        s=s+magic[r][i];
    }
    ll ans;
    ans=sum-s;
    if(ans<=0)
    {
        cout<<-1<<endl;
        return 0;

    }
    for(i=1; i<=n; i++)
    {
        rs=0;
        for(j=1; j<=n; j++)
        {
            rs=rs+magic[i][j];
            if(magic[i][j]==0)
                rs+=ans;
        }
        ind.push_back(rs);
    }
    rs=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                rs=rs+magic[i][j];
                if(magic[i][j]==0)
                    rs+=ans;
            }
        }
    }
    ind.push_back(rs);
    j=n;
    rs=0;
    for(i=1;i<=n;i++)
    {
        rs+=magic[i][j];
        if(magic[i][j]==0)
            rs+=ans;
        j--;
    }
    ind.push_back(rs);
    for(i=1;i<=n;i++)
    {
        rs=0;
        for(j=1;j<=n;j++)
        {
            rs+=magic[j][i];
            if(magic[j][i]==0)
                rs+=ans;
        }
        ind.push_back(rs);
    }
    sort(ind.begin(),ind.end());
    if(n==1&&magic[1][1]==0){
        cout<<1<<endl;
        return 0;}
    if(ans==0)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(ind[0]!=ind[ind.size()-1])
    {
        cout<<-1<<endl;
    }
    else cout<<ans<<endl;
}
