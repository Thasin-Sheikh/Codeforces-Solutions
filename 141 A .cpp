#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[2000],i,sum=0,count[30],cnt=0,cnt1=0,ans;
    string s,str,ptr;
    cin>>s>>str>>ptr;
    for(i=0;i<30;i++)
    {
        count[i]=0;
    }
    for(i=0; i<ptr.length(); i++)
    {
        count[ptr[i]-'A']++;
    }

    for(i=0; i<s.length(); i++)
    {
        if(count[s[i]-'A']!=0)
        {
            cnt++;
            count[s[i]-'A']--;
        }
    }
    for(i=0; i<str.length(); i++)
    {
        if(count[str[i]-'A']!=0)
        {
            cnt1++;
            count[str[i]-'A']--;
        }
    }

    //cout<<cnt1<<" "<<cnt<<endl;
    ans=str.length()+s.length();
    if(ans==cnt+cnt1&&ans==ptr.length())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
