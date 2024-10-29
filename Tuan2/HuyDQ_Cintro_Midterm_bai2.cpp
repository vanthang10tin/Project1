#include <bits/stdc++.h>
#define Task "bai1"
#define ll long long
#define maxn 1000005
using namespace std;
ll n,m,d[maxn],l[maxn],r[maxn], f[maxn];
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);cin.tie(0);
    if(fopen(Task".inp", "r"))
    {
        freopen(Task".inp","r",stdin);
        freopen(Task".out","w",stdout);
    }
    cin >> n;
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    for(int i = 3; i <=n ; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n-1];


}


