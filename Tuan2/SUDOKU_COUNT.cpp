#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 1000005
#define MOD 1000000007
using namespace std;
int a[9][9],ketqua,hang[11][11], cot[11][11], hop[11][11];

int loai(int x, int y)
{
    return (x / 3) * 3 + (y / 3) + 1;
}

void thu(int x, int y)
{
    if (x == 9)
    {
        ketqua++;
        return;
    }

    int nx = x, ny = y;
    if (ny < 8) ny++;
    else
    {
        nx++;
        ny = 0;
    }

    if (a[x][y]) thu(nx, ny);
    else
    {
        for (int so = 1; so < 10; so++)
        {
            if (!hang[x][so] && !cot[y][so] && !hop[loai(x, y)][so])
            {
                hang[x][so]++;
                cot[y][so]++;
                hop[loai(x, y)][so]++;
                thu(nx, ny);
                hang[x][so]--;
                cot[y][so]--;
                hop[loai(x, y)][so]--;
            }
        }
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    if (fopen(Task".inp", "r"))
    {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> a[i][j];
            if (!a[i][j]) continue;

            hang[i][a[i][j]]++;
            cot[j][a[i][j]]++;
            hop[loai(i, j)][a[i][j]]++;

            if (hang[i][a[i][j]] > 1 || cot[j][a[i][j]] > 1 || hop[loai(i, j)][a[i][j]] > 1)
                return !(cout << 0);
        }
    }

    thu(0, 0);
    cout << ketqua;
    return 0;
}



