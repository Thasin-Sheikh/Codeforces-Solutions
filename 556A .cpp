#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,n,b,i,j,cnt=0,c=0,d=0;
    string s;
    cin>>n>>s;
    s[s.length()]=2;
    for(i=0; i<s.length();)
    {
        if(s[i]=='0'&&s[i+1]=='1'||s[i]=='1'&&s[i+1]=='0')
        {
            cnt++;
            i+=2;
        }
        else
        {
            if(s[i]=='1')
                c++;
            else d++;
            i++;
        }
        //cout<<i<<endl;
    }
    //cout<<cnt<<" "<<c<<" "<<d<<endl;
    cout<<s.length()-(cnt*2)-(2*min(c,d))<<endl;
}
