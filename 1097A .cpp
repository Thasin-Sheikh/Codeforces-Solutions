#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,cnt,t,ans,flag=1,x,d,sum=0,dif,dp[100][100];
    string s;
    char a,b;
    vector<pair<char,char>>vec;
    vector<pair<char,char>> ::iterator it;
    cin>>s;
    for(i=0; i<5; i++)
    {
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    }
    for(it=vec.begin(); it!=vec.end(); it++)
    {
        if(it->first==s[0]||it->first==s[1]||it->second==s[0]||it->second==s[1])
        {

            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
}
