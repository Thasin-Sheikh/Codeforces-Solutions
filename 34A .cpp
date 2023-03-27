#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,array[100000],arr[100000],p,q,c=0,a,b;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }
    p=abs(array[n-1]-array[0]);
    a=0;
    b=n-1;
    long long int flag;
    flag=0;
    //cout<<a<<" "<<b<<endl;
    for(i=0; i<n-1; i++)
    {
        if(abs(array[i+1]-array[i])<p)
        {
           //q=abs(array[i+1]-array[i]);
           //cout<<q<<endl;
            a=i;
            b=i+1;
            p=abs(array[i+1]-array[i]);
            //cout<<a<<" "<<b<<endl;
        }


    }

    cout<<a+1<<" "<<b+1<<endl;



}
