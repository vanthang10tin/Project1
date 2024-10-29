#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
#define maxn 1000005
using namespace std;
int a[505][505], sumcot[505];
queue<int> st;
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
    while(cin >> s)
    {
        int t;
        if (s  == "#") return 0;
        if(s == "PUSH")
        {
            cin >> t;
            st.push(t);
        }
        else
        {
            if(st.empty() == 1)
            {
                cout << "NULL" <<"\n";
                continue;
            }
            t = st.front();
            cout << t;
            st.pop();
            cout <<"\n";
        }

    }

}







