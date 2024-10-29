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
    string T, s1, s2;
    getline(cin, T);
    getline(cin, s1);
    getline(cin, s2);
    int k = T.length();
    for(int i = 0; i < s2.length(); i++)
    {
        string s3 = s2.substr(i, k);
        if(s3 == T)
        {
                cout << s1 <<" ";
                i += k;
        }
        else cout << s2[i];

    }


}
