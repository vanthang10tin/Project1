#include <bits/stdc++.h>
#define Task "bai1"
#define maxn 300005
#define int long long
#define X first
#define Y second
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;

int par[230997];

int anc(int p)
{
    if (par[p] == p)
        return p;
    else
        return par[p] = anc(par[p]);
}

void join(int p, int q)
{
    par[anc(p)] = anc(q);
}



vector<iii> edge;

int n, m;
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

    for (int i = 1; i <= n; i++)
        par[i] = i;

    while (m--)
    {
        int p, q, w;
        cin >> p >> q >> w;
        edge.push_back(iii(w, ii(p, q)));
    }

    sort(edge.begin(), edge.end());

    int r = 0;

    for (auto it = edge.begin(); it != edge.end(); it++)
    {
        if (anc(it->Y.X) != anc(it->Y.Y))
        {
            join(it->Y.X, it->Y.Y);
            r += it->X;
        }
    }

    cout << r << "\n";


    return 0;
}
