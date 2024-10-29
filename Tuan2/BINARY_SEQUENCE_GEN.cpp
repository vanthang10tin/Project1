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
    long long h = (1 << n);
    h--;
    for(int i = 0; i <= h; i++)
    {
        for(int j = n - 1; j >= 0; j--)
            cout << ((i>>j)&1);
        cout <<"\n";
    }


}
