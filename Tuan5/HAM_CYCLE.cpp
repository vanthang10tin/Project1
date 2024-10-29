#include <bits/stdc++.h>
#define Task "bai1"
#define maxn 300005
#define int long long
#define X first
#define Y second
using namespace std;

const int MAX = 20;
int adj[MAX][MAX];
bool visited_arr[MAX];
int n, m;

bool hamiltonianCycleUtil(int current, int count)
{
    if (count == n)
    {
        if (adj[current][0] == 1)
        {
            return true;
        }
        return false;
    }
    for(int next = 0; next < n; next++)
    {
        if(adj[current][next] && !visited_arr[next])
        {
            visited_arr[next] = true;
            if(hamiltonianCycleUtil(next, count + 1))
            {
                return true;
            }
            visited_arr[next] = false;
        }
    }
    return false;
}

bool isHamiltonian()
{
    memset(visited_arr, false, sizeof(visited_arr));
    visited_arr[0] = true;
    return hamiltonianCycleUtil(0, 1);
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

    int T;
    cin >> T;
    while(T--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                adj[i][j] = 0;
            }
        }
        for(int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            u--;
            v--;
            adj[u][v] = 1;
            adj[v][u] = 1;
        }
        bool ans = isHamiltonian();
        cout << ans <<"\n";
    }
}
