#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,cnt=0,d=0,flag=0,j;
    vector<string>s,se;
    string a[1010],b,p,cd;
    char c;
    cin>>n;
    for(j=0; j<n; j++)
    {
        cin>>b;
        for(i=0; i<b.length(); i++)
        {
            if(b[i]=='O'&&b[i+1]=='O'&&flag==0)
            {
                b[i]=b[i+1]='+';
                flag=1;
            }
        }
        s.push_back(b);

    }
    /* for(i=0; i<n; i++)
     {
         p=a[i];
         for(j=0; j<p.length(); j++)
         {
             if(p[j]=='O'&&p[j+1]=='O'&&flag==0)
             {
                 p[j]=p[j+1]='+';
                 flag=1;
             }
         }
     }
     for(i=0; i<n; i++)
     {
         cout<<a[i];
     }*/
     if(flag)
     {
         cout<<"YES"<<endl;
         for(i=0;i<s.size();i++)
            cout<<s[i]<<endl;
     }
     else cout<<"NO"<<endl;
}
