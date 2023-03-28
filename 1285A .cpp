#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,i,j,array[100000+10],p,q,sum=0,cnt1=0,cnt=0,cnt2=0,cnt3=0,flag=1,ans;
    long long int st,ct,qt;
    string str,ptr;
    vector<pair<long long int,long long int>> veci;
    vector<char>vecc;
    vector<string>vecs;
    cin>>n;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        if(str[i]=='R')
            cnt++;
        else
            cnt2++;
    }
    //cout<<cnt<<" "<<cnt2<<endl;
    ans=abs(cnt-0)+(cnt2-0)+1;
    cout<<ans<<endl;


}
