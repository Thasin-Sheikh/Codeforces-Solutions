#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,ar[2000],i,sum=0;
    string s[200000+100];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]=="Tetrahedron")
            sum=sum+4;
        if(s[i]=="Cube")
            sum=sum+6;
        if(s[i]=="Octahedron")
            sum=sum+8;
        if(s[i]=="Dodecahedron")
            sum=sum+12;
        if(s[i]=="Icosahedron")
            sum=sum+20;

    }
    cout<<sum<<endl;

}
