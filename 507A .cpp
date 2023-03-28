///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
#include<regex>
#include<math.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
set<ll>sc,ans;
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,m,after,a,b,c,t,k,f,acopy[100000+10],sum=0,ans=0,array[100000+10];
    vector<pair<ll,ll>>cv;
    ll count[1001];
    memset(count,0,sizeof(count));
    vector<ll>vl;
    char ch[101][101];
    char ch1;
    list<ll>lc;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        acopy[i]=array[i];
    }
    sort(array,array+n);
    for(i=0; i<n; i++)
    {
        f=1;
        if(sum+array[i]<=m)
        {
            sum=sum+array[i];
            for(j=0; j<n; j++)
            {
                if(acopy[j]==array[i])
                {
                    vl.push_back(j+1);
                    acopy[j]=-1;
                    f=0;
                    break;
                }

            }


        }
        else break;

    }
    cout<<vl.size()<<endl;
    for(i=0; i<vl.size(); i++)
        cout<<vl[i]<<" ";


}
