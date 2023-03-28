#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,k,f,j;
    string str;
    long long int arr[10];
    for(i=0; i<10; i++)
        arr[i]=0;
    cin>>n;
    cin>>str;
    for(i=0; i<str.length(); i++)
    {
        f=0;
        if(str[i]=='L')
        {
            for(j=0; j<10; j++)
            {
                if(arr[j]==0)
                {
                    arr[j]=1;
                    break;
                }
            }
        }
        else if(str[i]=='R')
        {
            for(j=9; j>=0; j--)
            {
                if(arr[j]==0)
                {
                    arr[j]=1;
                    break;
                }
            }

        }
        else
        {
            long long int x;
            x=str[i]-'0';
            //cout<<x<<endl;
            arr[x]=0;
        }

    }
    for(i=0; i<10; i++)
        cout<<arr[i];
    cout<<endl;

}
