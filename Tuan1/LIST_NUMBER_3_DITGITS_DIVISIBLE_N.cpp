#include <bits/stdc++.h>
#define Task "bai1"

using namespace std;

int n, a[100005];
int maxx = -1e9, minx = 1e9, sum = 0;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);cout.tie(NULL);
    if(fopen(Task".inp", "r"))
    {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }
    cin >> n;
    int h = 100/n;
    for(int i = h; i <= 100000; i++)
    {
        if(n*i >= 100 && n*i <= 999) cout << n*i <<" ";
    }
    return 0;
}
