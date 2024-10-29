#include <bits/stdc++.h>
#define Task "bai1"

using namespace std;

double n, a[100005], ans = 0;
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
    if(n <= 50)
    {
         ans = 0;
    }
    if(n >= 51 && n <= 100)
    {
         ans = 50*1728 + (n - 50)*1786 - 1728*n;
    }
    if(n >= 101 && n <= 200)
    {
        ans = 50*1728 + 50*1786 + (n - 100) * 2074 - (1728*100 + (n-100)*2074) ;
    }
    if(n >= 201 && n <= 300)
    {
         ans = 50*1728 + 50*1786 + 100 * 2074 + (n - 200)*2612 - (1728*100 + (100)*2074 + (n - 200)*2612);

    }
    if(n >= 301 && n <= 400)
    {
         ans = 50*1728 + 50*1786 + 100 * 2074 + 100*2612 + (n - 300)*2919 - (1728*100 + (100)*2074 + (n - 200)*2612);

    }
    if(n >= 401 && n <= 700)
    {
         ans = 50*1728 + 50*1786 + 100 * 2074 + 100*2612 + 100*2919+(n - 400)*3015 - (1728*100 + (100)*2074 + (200)*2612+(n-400)*3111);

    }
    if(n >= 701)
    {
         ans = 50*1728 + 50*1786 + 100 * 2074 + 100*2612 + 100*2919+(n - 400)*3015 - (1728*100 + (100)*2074 + (200)*2612+300*3111+(n-700)*3457);

    }
    if(ans  == 0) cout << fixed << setprecision(2) <<ans;
    else
    cout << fixed << setprecision(2) << -(ans + ans/10);


}
