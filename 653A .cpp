///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
#include<bits/stdc++.h>
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
    ll n,i,j,p=2,m,after,mark,array[100];
    vector<ll>cv;
    set<ll>sc;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        sc.insert(m);
    }
    i=0;
    for(auto it=sc.begin();it!=sc.end();it++)
    {
        array[i]=*it;
        i++;
    }
    sort(array,array+sc.size());
    for(i=0;i<n-2;i++)
    {
        ll dif=abs(array[i]-array[i+2]);
        if(dif<=2&&(array[i]!=array[i+1])&&(array[i]!=array[i+2])&&(array[i+1]!=array[i+2]))
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
