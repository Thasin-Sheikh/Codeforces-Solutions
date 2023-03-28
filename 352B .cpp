///*Bismillahir Rahmanir Rahim***///
/***Stay_Home_Stay_Safe***/
///**Author Thasin Sheikh**///
/*while(a)
    {
        if(a%2==0)
            dvi.push_back(0);
        else
            dvi.push_back(1);
        a/=2;
    }
    reverse(dvi.begin(),dvi.end());*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
const int N = 2e5 + 10;
ll aarray[200000+10];
ll magic[101][101];
vector<ll>primes;
bool prime[1000001];
ll ccount[100000+10];
vector<ll>v[100000];
int main()
{
    makefast__
    string str;
    ll a,b,c,d,e,f,x,y,t,A=0,B=0,L,j,i,l,r,m,n,C=0,sum=0,sum1=0;
    queue<ll>qu;
    vector<pair<ll,ll>>ans;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>aarray[i];
        v[aarray[i]].push_back(i);
        ccount[aarray[i]]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(v[aarray[i]].size()==1&&ccount[aarray[i]]==1)
        {
            ans.push_back(make_pair(aarray[i],0));
            //cout<<aarray[i]<<" "<<0<<endl;
            ccount[aarray[i]]=0;
        }
        if(v[aarray[i]].size()>1)
        {
            sort(v[i].begin(),v[i].end());
            r=v[aarray[i]][1]-v[aarray[i]][0];
            bool g=true;
            for(j=1;j<v[aarray[i]].size();j++)
            {
                y=v[aarray[i]][j]-v[aarray[i]][j-1];
                if(y!=r)
                {
                    g=false;
                    break;
                }
            }
            if(g)
                ans.push_back(make_pair(aarray[i],r));
                v[aarray[i]].clear();
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto it=ans.begin();it!=ans.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}
