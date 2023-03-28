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
        if(str[i]=='-'&&cnt>0)
            cnt--;
        else if(str[i]=='+')
            cnt++;
    }
    if(cnt<=0)
        cout<<0<<endl;
    else cout<<cnt<<endl;

}
