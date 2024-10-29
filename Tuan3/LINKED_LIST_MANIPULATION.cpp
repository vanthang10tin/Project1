#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 100005
using namespace std;

int n, a[maxn], trc[maxn], sau[maxn], check[maxn], cuoi = 1e5;
void add(int u, int v, int w)
{
    sau[v] = u;
    trc[w] = u;
    trc[u] = v;
    sau[u] = w;
}
void out()
{
    int u = sau[0];
    while (u != cuoi)
    {
        cout << u <<" ";
        u = sau[u];
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
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        check[a[i]] = 1;
    }
    a[n + 1] = cuoi;
    for (int i = 0; i <= n; i++)
    {
        sau[a[i]] = a[i + 1];
        trc[a[i + 1]] = a[i];
    }
    while (1)
    {
        string s;
        cin >> s;
        if (s == "addlast")
        {
            int u;
            cin >> u;
            if (!check[u])
            {
                check[u] = 1;
                add(u, trc[cuoi], cuoi);
            }
        }
        else if (s == "addfirst")
        {
            int u;
            cin >> u;
            if (!check[u])
            {
                check[u] = 1;
                add(u, 0, sau[0]);
            }
        }
        else if (s == "addafter")
        {
            int u, v;
            cin >> u >> v;
            if (check[v] && !check[u])
            {
                check[u] = 1;
                add(u, v, sau[v]);
            }
        }
        else if (s == "addbefore")
        {
            int u, v;
            cin >> u >> v;
            if (check[v] && !check[u])
            {
                check[u] = 1;
                add(u, trc[v], v);
            }
        }
        else if (s == "remove")
        {
            int u;
            cin >> u;
            if (check[u])
            {
                check[u] = 0;
                int v = trc[u], c = sau[u];
                sau[v] = c;
                trc[c] = v;
            }
        }
        else if (s == "reverse")
        {
            int u = sau[0];
            n = 0;
            while (u != cuoi)
            {
                a[++n] = u;
                u = sau[u];
            }
            for (int i = 1; i * 2 <= n; i++) swap(a[i], a[n - i + 1]);
            a[n + 1] = cuoi;
            for (int i = 0; i <= n; i++)
            {
                sau[a[i]] = a[i + 1];
                trc[a[i + 1]] = a[i];
            }
        }
        else
            break;
    }
    out();
    return 0;

}
