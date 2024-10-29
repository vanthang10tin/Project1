#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 100005
using namespace std;

int dd[maxn], d[maxn][2],root = -1e18;

void add(int u, int v)
{
    if (v < u)
    {
        if (d[u][0] == -1e18) d[u][0] = v;
        else add(d[u][0], v);
    }
    else
    {
        if (d[u][1] == -1e18) d[u][1] = v;
        else add(d[u][1], v);
    }
}

void BST(int u)
{
    cout << u << " ";
    if (d[u][0] != -1e18) BST(d[u][0]);
    if (d[u][1] != -1e18) BST(d[u][1]);
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
        if (s == "insert")
        {
            int u;
            cin >> u;
            if (!dd[u])
            {
                dd[u] = 1;
                d[u][0] = d[u][1] = -1e18;
                if (root == -1e18) root = u;
                else add(root, u);
            }
        }
        else break;
    }
    BST(root);



}
