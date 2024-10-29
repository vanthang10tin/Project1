#include <bits/stdc++.h>
#define Task "bai1"

using namespace std;

int a, b;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);cout.tie(NULL);
    if(fopen(Task".inp", "r"))
    {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }
    cin >> a >> b;
    cout << a + b <<" "<<a-b<<" "<<a*b<<" "<<a/b;
    return 0;
}
