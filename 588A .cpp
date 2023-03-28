#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int price=0, n,m,ar[100000],i,j,flag,cnt,a,b,ans=INT_MAX,sum=0,array[100000];
    string str,ptr;
    vector<long long int>vec;
    char ch;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>array[i]>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        ans=min(ans,ar[i]);
        price=price+array[i]*ans;

    }
    cout<<price<<endl;
}
