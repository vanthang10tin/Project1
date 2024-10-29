#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 100005
using namespace std;

vector <int> adj[maxn];
int root, node[maxn], cha[maxn];

void PreOrder(int u, int p)
{
    cout << u << " ";
    for(int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (v != p) PreOrder(v, u);
    }
}
void PostOrder(int u, int p)
{
    for(int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        if (v != p) PostOrder(v, u);
    }
    cout << u <<" ";
}
void InOrder(int u, int p)
{
    if (adj[u].size() < 2)
    {
        cout << u <<" ";
        return;
    }

    bool check1 = 0;
    for(int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];

        if (v != p)
        {
            InOrder(v, u);
            if (!check1)
            {
                check1 = 1;
                cout << u <<" ";
            }
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
    while (1)
    {
        string s;
        cin >> s;
        if (s == "MakeRoot")
        {
            int u;
            cin >> u;
            root = u;
            node[u] = 1;
        }
        else if (s == "Insert")
        {
            int u, v;
            cin >> u >> v;
            if (node[v] && !node[u])
            {
                adj[u].push_back(v);
                adj[v].push_back(u);
                node[u] = 1;
            }
        }
        else if (s == "PreOrder")
        {
            PreOrder(root, 0);
            cout << "\n";
        }
        else if (s == "InOrder")
        {
            InOrder(root, 0);
            cout << "\n";
        }
        else if (s == "PostOrder")
        {
            PostOrder(root, 0);
            cout << "\n";
        }
        else
            break;
    }


}
