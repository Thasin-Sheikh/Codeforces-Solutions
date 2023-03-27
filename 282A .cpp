#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10];
    int n,i,l,x=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        l=strlen(s);
        if(s[l-1]=='+'&&s[l-2]=='+'&&s[l-3]=='X'||s[l-1]=='X'&&s[l-2]=='+'&&s[l-3]=='+')
        {
            x=x+1;
        }
        if(s[l-1]=='-'&&s[l-2]=='-'&&s[l-3]=='X'||s[l-1]=='X'&&s[l-2]=='-'&&s[l-3]=='-')
        {
            x=x-1;
        }
    }
    cout<<x<<endl;
}
