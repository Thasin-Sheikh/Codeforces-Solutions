#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,array[100000+10],i=0,cnt=0;
    long long int lfirst,sec,third,mfirst,p,p2;
    char str[101];
    gets(str);
    while(str[i]!='?')
    {
        cnt++;
        i++;
    }
    //cout<<cnt<<endl;
    for(i=cnt; i>=0; i--)
    {
        if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
        {
            //cout<<str[i]<<" ";
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            break;
        }
    }


}
