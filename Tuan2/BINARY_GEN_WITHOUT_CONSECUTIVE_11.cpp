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
        string s;
        for(int j = n - 1; j >= 0; j--)
            s = s + char(int(((i>>j)&1)) + '0');
        int check = 0;
        for(int j = 1; j < s.length(); j++)
            if(s[j] == s[j - 1] && s[j] == '1') check++;
        if(check == 0) cout <<s<<"\n";
    }


}
