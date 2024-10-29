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
    string s;
    while(getline(cin, s))
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z') s[i] -= ('a' - 'A');
        }
        cout << s <<"\n";
    }

}
