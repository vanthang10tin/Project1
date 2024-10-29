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
    int n;
    cin >> n;
    int dem = 0;
    for(int i = 1; i <= n; i++)
    {
       cin >> a[i];
       if(a[i] % 2 == 0) dem++;
    }
    cout << n - dem <<" "<<dem;


}
