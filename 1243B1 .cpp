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
    ll candy=0,move=0,m,n,i,t,j,sum1,sum,a,b,r,s=0,rs,array[10];
    set<char>vc;
    vector<ll>ind;
    cin>>t;
    while(t--)
    {
        vector<ll>vc;
        cin>>n;
        cin>>str>>ptr;
        for(i=0; i<ptr.length(); i++)
        {
            if(str[i]!=ptr[i])
            {
                vc.push_back(i);

            }
        }
        //for(i=0;i<vc.size();i++)
          //  cout<<vc[i]<<" ";
        if(vc.size()>2)
            cout<<"NO"<<endl;
        else if(vc.size()!=1)
        {
            if(vc.size()==2)
                swap(str[vc[0]],ptr[vc[1]]);
            if(str==ptr)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;


        vc.clear();
    }


}
