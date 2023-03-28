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
ll aarray[100000+10];
ll magic[501][501];
ll ar[200000+10];
int main()
{
    makefast__
    string ptr[16]= {"00:00", "01:10", "02:20", "03:30", "04:40", "05:50","10:01","11:11", "12:21","13:31","14:41", "15:51","20:02", "21:12", "22:22","23:32"};
    ll b,u,l,B,hour,minute,ta,ans=0,fa,tb,fb,sum,tower,floor,q,left[100000+10],right[100000+10];
    dl sumblue=0,sumred=0;
    vector<ll>vL,vR ;
    set<ll>sc;
    char ch;
    cin>>hour;
    cin>>ch;
    cin>>minute;
   while(hour/10!=minute%10||hour%10!=minute/10)
   {
       minute++;
       if(minute==60)
       {
           hour++;
           minute=0;
       }
       if(hour==24)
       {
           hour=0;
       }
       ans++;
   }
   cout<<ans<<endl;


}
