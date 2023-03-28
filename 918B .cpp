///*BY The Name Of ALLAH***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
using namespace std;
long long int po[1005][10];
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,ptr,ps[1001],s[1001];
    ll n,m,a,j,k,i;
    vector<pair<string,string>>svc;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>str>>ptr;
        ptr+=';';
        svc.push_back(make_pair(str,ptr));
    }
    for(i=0;i<m;i++)
    {
        cin>>ps[i]>>s[i];
    }
  for(i=0;i<m;i++){
       for(auto it=svc.begin();it!=svc.end();it++)
       {
               if(it->second==s[i])
               {
                   cout<<ps[i]<<" "<<s[i];
                   cout<<" #";
                   cout<<it->first<<endl;
                   break;
               }

       }
  }

}
///Alhamdulillah
