#include <bits/stdc++.h>
#define Task "bai1"
#define maxn 300005
#define int long long
using namespace std;

int n, m, tr[maxn];
vector<int> a[maxn];
void DFS(int u)
{
    for(auto v : a[u])
    {
        if(tr[v] == 0)
        {
            tr[v] = 1;
            cout << v <<" ";
            DFS(v);
        }
    }
}
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
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    tr[1] = 1;
    cout << 1 <<" ";
    DFS(1);


}
