#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 1000005
using namespace std;

int n, a[maxn];
map<int, int> dd;
int T, MOD;

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
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cout << dd[a[i]] <<"\n";
        if(dd[a[i]] == 0) dd[a[i]] = 1;
    }

}
