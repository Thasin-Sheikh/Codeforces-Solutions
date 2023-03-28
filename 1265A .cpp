///*Bismillahir Rahmanir Rahim***///
///**Author Thasin Sheikh**///
/*    #include <regex>
    ...
    std::string string("hello $name");
    string = std::regex_replace(string, std::regex("\\$name"), "Somename");
    */
#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
#define makefast__  ios_base::sync_with_stdio(false);
using ll=long long int  ;
using dl =double;
ll magic[501][501];
int main()
{
    makefast__
    string ptr,str,uni;
    ll candy=0,move=0,m,n,i,t,j,sum1,sum,a,b,r,s=0,rs,array[200001],f;
    vector<ll>vp;
    set<char>sc;
    cin>>n;
    while(n--)
    {
        cin>>str;
        str+='b';
             f=1;
        for(i=0; i<str.length()-2; i++)
        {
            if(str[i]!='?'&&(str[i+1]==str[i]))
            {
                //cout<<str[i]<<endl;
                cout<<-1<<endl;
                f=0;
                break;
            }
        }
        if(f)
        {
            for(i=0; i<str.length()-1; i++)
            {
                if(str[0]=='?')
                {
                    if(str[1]=='a'||str[1]=='c')
                        str[0]='b';
                    else
                        str[0]='a';
                }
                else if(str[i]=='?'&&str[i-1]=='a'&&str[i+1]=='b')
                    str[i]='c';
                else if(str[i]=='?'&&str[i-1]=='b'&&str[i+1]=='a')
                    str[i]='c';
                else if(str[i]=='?'&&str[i-1]=='b'&&str[i+1]=='b')
                    str[i]='c';
                else if(str[i]=='?'&&str[i-1]=='a'&&str[i+1]=='a')
                    str[i]='c';
                else if(str[i]=='?'&&str[i-1]=='c'&&str[i+1]=='c')
                    str[i]='a';
                else if(str[i]=='?'&&str[i-1]=='a'&&str[i+1]=='c')
                    str[i]='b';
                else if(str[i]=='?'&&str[i-1]=='c'&&str[i+1]=='a')
                    str[i]='b';
                else if(str[i]=='?'&&str[i-1]=='b'&&str[i+1]=='c')
                    str[i]='a';
                else if(str[i]=='?'&&str[i-1]=='c'&&str[i+1]=='b')
                    str[i]='a';
                else if(str[i]=='?'&&str[i-1]=='c'&&str[i+1]=='?')
                    str[i]='a';
                else if(str[i]=='?'&&str[i+1]=='?')
                {
                    if(str[i-1]=='a')
                        str[i]='b';
                    else  if(str[i-1]=='b')
                        str[i]='a';
                    if(str[i-1]=='c')
                        str[i]='b';

                }



            }
            for(i=0;i<str.length()-1;i++)
                cout<<str[i];
            cout<<endl;

        }
    }

}
