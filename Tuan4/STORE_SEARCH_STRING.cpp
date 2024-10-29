#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 1000005
using namespace std;

int n, a[maxn];
map<string, int> dd;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen(Task".inp", "r"))
    {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }
    string s;
    while(cin >> s)
    {
        if (s == "*") break;
        dd[s] = 1;
    }
    while(cin >> s)
    {
        if (s == "***") return 0;
        string s1;
        cin >> s1;
        if (s == "find")
        {
            cout << dd[s1];
        }
        else
        {
            if(dd[s1] == 1)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
                dd[s1] = 1;
            }
        }
        cout <<"\n";
    }


}
