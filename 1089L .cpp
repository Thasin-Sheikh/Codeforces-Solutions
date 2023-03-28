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
int main()
{
    makefast__
    string ptr,str,uni;
    ll n,i,j,p,m,after,a,k,mark,bose=0,daray,ans,sum=0,array[100000+10],persuade[100000+10],guest,f,extra=0;
    vector<pair<ll,ll>>cv;
    set<ll>sc;
    cin>>n>>m;
    ll count[10000];
    memset(count,0,sizeof(count));
    for(i=0; i<n; i++)
    {
        cin>>array[i];
        sc.insert(array[i]);
        count[array[i]]++;
    }
    daray=m-sc.size();
    if(sc.size()==m)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=0; i<n; i++)
    {
        cin>>persuade[i];
        cv.push_back(make_pair(array[i],persuade[i]));
    }
    for(i=0; i<n; i++)
    {
         ans=INT_MAX;
         //cout<<count[array[i]]<<" ";
        if(count[array[i]]>1)
        {
            for(auto it=cv.begin();it!=cv.end();it++)
            {
                if(it->first==array[i])
                {
                    ans=min(ans,it->second);
                }
            }
            cout<<ans<<" ";
            sum=sum+ans;
            extra++;
            count[array[i]]=0;
            array[i]=-1;
            if(extra==daray)
            {
                cout<<sum<<endl;
                return 0;
            }
        }
    }

}
