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
    for(int i = 1; i <= n; i++)
    {
        d[i] = i;
        cout << d[i] <<" ";
    }
    cout <<"\n";
    while(next_permutation(d + 1, d + n + 1))
    {
        for(int i = 1; i <= n; i++) cout << d[i] <<" ";
        cout <<"\n";
    }
