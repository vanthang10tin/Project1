#include <bits/stdc++.h>
#define Task "bai1"
#define ll long long
#define maxn 1000005
#define MOD 1000000007
using namespace std;
ll ans[1005][1005];
long long tinh(int k, int n)
{
    if (k == n || k == 0) ans[k][n] = 1;
    else
     if(ans[k][n] == 0)
     ans[k][n] = (tinh(k - 1, n - 1) % MOD + tinh(k, n - 1) % MOD)%MOD;
    return ans[k][n];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);cin.tie(0);
    if(fopen(Task".inp", "r"))
    {
        freopen(Task".inp","r",stdin);
        freopen(Task".out","w",stdout);
    }
    int u, v;
    cin >> u >> v;
    cout << tinh(u, v);


}
