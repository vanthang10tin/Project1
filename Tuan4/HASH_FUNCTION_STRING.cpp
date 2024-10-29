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
    cin >> T >> MOD;
    while (T--)
    {
        string s;
        cin >> s;
        int ans = 0;
        int n = s.length();
        int hashh = 1;
        for(int i = n - 1; i >= 0; i--)
        {
            ans = (ans + s[i] * hashh) % MOD;
            hashh *= 256;
            hashh = hashh % MOD;
        }
        cout << ans <<"\n";
    }
    
}
