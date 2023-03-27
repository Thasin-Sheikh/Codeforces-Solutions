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
    ll n,i,j,p,m,after,a,k,mark,bose=0,daray=0,ans=0,array[10000],guest,f;
    vector<ll>cv,lb;
    set<pair<ll,ll>>sc;
    cin>>n>>m;
    mark=m*n;
    for(i=1; i<=m; i++)
    {
        cin>>a;
        cv.push_back(a);
        lb.push_back(a);
    }
    ll c;
    k=0;
    while(m--)
    {
        f=0;
        c=0;
        for(i=1; i<=mark; i++)
        {
            auto it=find(lb.begin(),lb.end(),i);
            if(it==lb.end())
            {
                cout<<i<<" ";
                lb.push_back(i);
                c++;
                if(c==n-1)
                {
                    f=1;
                    break;
                }

            }
            if(f)
                break;
        }
        cout<<cv[k]<<endl;
        k++;

    }

}
