#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,m,a,i,b,c,d,ar[100000],sum=0;
    vector<long long int>v;
    string str,ptr;
    char ch;
    cin>>str>>ptr;
    if(str.length()!=ptr.length())
    {
        cout<<"No"<<endl;
        return 0;
    }

    for(int i=0; i<str.length(); i++)
        str[i]=str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u';
    for(int i=0; i<ptr.length(); ++i)
        ptr[i]=ptr[i]=='a'||ptr[i]=='e'||ptr[i]=='i'||ptr[i]=='o'||ptr[i]=='u';
    for(int i=0; i<ptr.length(); ++i)
    {
        if(str[i]!=ptr[i])
        {
            cout << "No"<<endl;
            return 0;
        }
    }
    cout << "Yes"<<endl;
    return 0;
}
