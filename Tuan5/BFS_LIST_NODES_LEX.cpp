#include <bits/stdc++.h>
#define Task "bai1"
#define maxn 300005
#define int long long
using namespace std;

int n, m, tr[maxn];
vector<int> a[maxn];

void BFS(int u)
{
    queue<int> qu;
    qu.push(u);
    tr[u] = 1;
    vector<int> result;
    result.push_back(u);

    while (!qu.empty())
    {
        int u1 = qu.front();
        qu.pop();

        sort(a[u1].begin(), a[u1].end());

        for (auto v : a[u1])
        {
            if (tr[v] == 0)
            {
                tr[v] = 1;
                qu.push(v);
                result.push_back(v);
            }
        }
    }

    for (int node : result)
    {
        cout << node << " ";
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
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    //BFS(1);
    for(int i = 1; i <= n; i++)
    {
        if(tr[i] == 0)
        {
            BFS(i);
        }
    }

    return 0;
}
