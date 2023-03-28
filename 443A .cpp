#include<bits/stdc++.h>
using namespace std;
int main()
{
    char st[10002];
    int i,j,m,n,l,cnt=0,ans;
    set < char > s;
    scanf(" %[^\n]",st);
    for(i=0; i<strlen(st); i++)
    {
        if(st[i]>='a' && st[i]<='z')
        {
            s.insert(st[i]);
        }
    }
    cout<<s.size()<<endl;

}

