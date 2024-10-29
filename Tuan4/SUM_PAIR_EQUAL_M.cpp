#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 1000005
using namespace std;

int n, a[maxn];
map<int, int> dd;
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
    int m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dd[a[i]]++;
    }
    sort(a + 1, a + n + 1);
    vector<int> khac;
    a[0] = a[1] - 1;
    int ans = 0;
    for(int i = 1; i <= n; i++)
        if(a[i] != a[i - 1]) khac.push_back(a[i]);
    for(auto x : khac)
    {
        if(x > m/2 - 1) break;
        //cout << x <<" ";
        int j = m - x;
        //cout << ans <<"\n";
        ans += dd[x] * dd[j];

    }
    cout << ans;

}
