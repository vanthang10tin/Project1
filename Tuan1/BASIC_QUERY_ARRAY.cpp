#include <bits/stdc++.h>
#define Task "bai1"

using namespace std;

int n, a[100005];
int maxx = -1e9, minx = 1e9, sum = 0;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);cout.tie(NULL);
    if(fopen(Task".inp", "r"))
    {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
        minx = min(minx, a[i]);
        sum += a[i];
    }
    char c;
    cin >> c;
    string s;
    while(cin >> s)
    {
        if(s == "***") return 0;
        if(s == "find-max") cout << maxx;
        else
        if(s == "find-min") cout << minx;
        else
        if(s == "sum")      cout << sum;
        else
        {
            int u, v;
            cin >> u >> v;
            int max1 = -1e9;
            for(int i = u; i <= v; i++)
                max1 = max(max1, a[i]);
            cout << max1;
        }
        cout <<"\n";

    }
    return 0;
}
