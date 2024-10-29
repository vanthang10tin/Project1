#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 200005
using namespace std;
long long n, a, b;
string base = "()[]{}";


bool check(string s)
{
    stack <int> st;
    for (char c : s)
    {
        int x = base.find(c);
        if (x % 2)
        {
            if (st.empty() ||st.top() != x - 1) return 0;
            st.pop();
        }
        else st.push(x);
    }
    return st.empty();
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

    string s;
    cin >> s;
    {
        if (check(s))
        {
            cout << 1;
            return 0;
        }
        cout << 0;
    }


}






