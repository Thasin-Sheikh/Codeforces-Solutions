#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,m,po,no,flag=0,cnt=0,ans=0;
    int i;
    string str;
    set<string>s;
    set<string>::iterator it;
    cin>>str;
    s.insert(str);
    while(1)
    {
        string p;
        p+=str[str.length()-1];
        for(i=0; i<str.length()-1; i++)
        {
            p+=str[i];
        }
        it = s.find(p);
        if (it == s.end())
        {
            str=p;
            cnt++;
            s.insert(p);
            //bcout<<cnt<<endl;
        }
        else
            break;
    }
    cout<<cnt+1<<endl;


}
