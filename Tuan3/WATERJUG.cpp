#include <bits/stdc++.h>
#define Task "bai1"
#define int long long
using namespace std;

int a[5], d;

struct Node
{
    int F, S, dem;
};

bool tr[901][901];

main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen(Task".inp", "r"))
    {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }
    cin >> a[1] >> a[2] >> d;
    if(d > max(a[1], a[2]) || d % __gcd(a[1], a[2]) != 0)
    {
        cout << -1;
        return 0;
    }
    queue<Node> q;
    q.push(Node{0, 0, 0});
    tr[0][0] = 1;
    while(!q.empty())
    {
        Node check = q.front();
        q.pop();
        if(check.F == d || check.S == d)
        {
            cout << check.dem;
            return 0;
        }
        if(!tr[a[1]][check.S])
        {
            q.push(Node{a[1], check.S, check.dem +1});
            tr[a[1]][check.S] = 1;
        }
        if(!tr[check.F][a[2]])
        {
            q.push(Node{check.F, a[2], check.dem +1});
            tr[check.F][a[2]] = 1;
        }
        if(!tr[0][check.S])
        {
            q.push(Node{0, check.S, check.dem +1});
            tr[0][check.S] = 1;
        }
        if(!tr[check.F][0])
        {
            q.push(Node{check.F, 0, check.dem +1});
            tr[check.F][0] = 1;
        }
        int k = min(check.F, a[2] - check.S);
        int newF = check.F - k;
        int newS = check.S + k;
        if(!tr[newF][newS])
        {
            q.push(Node{newF, newS, check.dem +1});
            tr[newF][newS] = 1;
        }
        k = min(check.S, a[1] - check.F);
        newF = check.F + k;
        newS = check.S - k;
        if(!tr[newF][newS])
        {
            q.push(Node{newF, newS, check.dem +1});
            tr[newF][newS] = 1;
        }
    }
    cout << -1;
}
