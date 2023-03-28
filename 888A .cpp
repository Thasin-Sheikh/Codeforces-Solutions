#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,k,f,j,array[100000],c=0;
    string str;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>array[i];
    for(i=1; i<n-1; i++)
    {
        if(array[i]<array[i-1]&&array[i]<array[i+1])
            c++;
        if(array[i]>array[i-1]&&array[i]>array[i+1])
            c++;
    }
    cout<<c<<endl;

}
