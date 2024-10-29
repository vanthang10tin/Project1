#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 100005
using namespace std;
map <string, int> Map;
int par[maxn], n, high[maxn], child[maxn];;
vector <int> adj[maxn];
void dfs(int u)
{
    for(int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        dfs(v);
        child[u] += (child[v] + 1);
        high[u] = max(high[u], high[v] + 1);
    }
}

main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);cin.tie(0);
    if (fopen(Task".inp", "r"))
    {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }
    while (1)
    {
        string s;
        cin >> s;
        if (s == "***") break;
        int u = Map[s];
        if (!u) u = ++n;
        Map[s] = u;
        cin >> s;
        int v = Map[s];
        if (!v) v = ++n;
        Map[s] = v;
        par[u] = v;
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) if (!par[i]) dfs(i);
    while (1)
    {
        string s;
        cin >> s;
        if (s == "***") break;
        if (s == "descendants")
        {
            cin >> s;
            cout << child[Map[s]] << "\n";
        }
        else
        {
            cin >> s;
            cout << high[Map[s]] << "\n";
        }
    }




}







