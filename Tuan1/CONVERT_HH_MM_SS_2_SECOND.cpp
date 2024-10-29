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
    cin >> s;
    int n = s.length();
    if ( n != 8|| s[2]!=':' || s[5] != ':')
    {
        cout <<"INCORRECT";
        return 0;
    }
    int gio = (s[0] - '0')*10 + (s[1] - '0');
    int phut = (s[3] - '0')*10 + (s[4] - '0');
    int giay = (s[6] - '0')*10 + (s[7] - '0');
    int ans = gio*3600 + phut*60 + giay;
    if(gio < 0 || gio >= 24)
    {
        cout <<"INCORRECT";
        return 0;
    }
    if(phut < 0 || phut >= 60)
    {
        cout <<"INCORRECT";
        return 0;
    }
     if(giay < 0 || giay >= 60)
    {
        cout <<"INCORRECT";
        return 0;
    }
    cout << ans;


}
