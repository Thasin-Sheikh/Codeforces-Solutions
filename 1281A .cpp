#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,l;
    char st[10001];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>> st;
        l=strlen(st);
        if(st[l-1]=='o'&&st[l-2]=='p')
            cout<<"FILIPINO"<<endl;
        if(st[l-1]=='u'&&st[l-2]=='s'&&st[l-3]=='e'&&st[l-4]=='d'||st[l-1]=='u'&&st[l-2]=='s'&&st[l-3]=='a'&&st[l-4]=='m')
            cout<<"JAPANESE"<<endl;
        if(st[l-1]=='a'&&st[l-2]=='d'&&st[l-3]=='i'&&st[l-4]=='n'&&st[l-5]=='m')
            cout<<"KOREAN"<<endl;
    }

    return 0;
}
