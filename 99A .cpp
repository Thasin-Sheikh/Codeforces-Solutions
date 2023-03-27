#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,ar[100000],i,j,flag,cnt=0,a,b,ans;
    string str,ptr;
    vector<long long int>vec;
    char ch;
    cin>>str;
    //cout<<str<<endl;
    for(i=0; i<str.length(); i++)
    {
        if(str[i-1]!='9'&&str[i]=='.'&&(str[i+1]=='5'||str[i+1]=='6'||str[i+1]=='7'||str[i+1]=='8'||str[i+1]=='9'))
        {
            flag=1;
        }
        //cout<<str[i+1];
        else if(str[i-1]!='9'&&str[i]=='.'&&(str[i+1]='0'||str[i+1]=='1'||str[i+1]=='2'||str[i+1]=='3'||str[i+1]=='4'))
            flag=0;
        else if(str[i-1]=='9'&&str[i]=='.')
        {
            flag=2;
        }
    }
    //cout<<flag<<endl;
    if(flag==1)
    {
        for(i=0; i<str.length(); i++)
        {
            if(str[i]=='.')
            {
                int x;
                x=str[i-1]-'0';
                x++;
                //cout<<x<<endl;
                str[i-1]=x+'0';
            }
        }
    }
    if(flag==1)
    {
        for(i=0; i<str.length(); i++)
        {
            if(str[i]!='.')
                cout<<str[i];
            else
            {
                return 0;
            }
        }

    }
    //cout<<str<<endl;
    if(flag==0)
    {
        for(i=0; i<str.length(); i++)
        {
            if(str[i]!='.')
                cout<<str[i];
            else
            {
                break;
            }
        }
    }
    if(flag==2)
    {
        cout<<" GOTO Vasilisa."<<endl;
    }
}
