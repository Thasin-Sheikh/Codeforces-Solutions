#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,array[100000+10],a,b,i,cnt=0,j,p,k=0;
    vector<pair<long long int,long long int>>vp;
    long long int count[100000];
    memset(count,0,sizeof(count));
    string str;
    cin>>n;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='0')
            cnt++;
    }
    if(str.length()==1)
    {
        cout<<str<<endl;
        return 0;
    }
    cout<<1;
    for(i=0; i<cnt; i++)
        cout<<0;
    cout<<endl;

}
