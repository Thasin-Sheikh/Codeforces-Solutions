#include<bits/stdc++.h>
using namespace std;
int n;
string s;

int main()
{
    string str;
    cin >> n;
    int ans = 0;
    while (cin >> str)
    {
        int cnt = 0;
        for (int i = 0; i < str.size(); i++)
            if (str[i]>='A'&&str[i]<='Z')
                ++cnt;
        ans = max(ans, cnt);
    }
    cout << ans << "\n";
    return 0;
}
