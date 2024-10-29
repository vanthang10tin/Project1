#include <bits/stdc++.h>
#define Task "bai1"

using namespace std;
int doi(char x)
{
    return (x - '0');
}

double a, b, c;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);cout.tie(NULL);
    if(fopen(Task".inp", "r"))
    {
        //freopen(Task".inp", "r", stdin);
        //freopen(Task".out", "w", stdout);
    }
    string s;
    cin >> s;
    //2024/24/06
    if(s.length() != 10 || s[4] != '-' || s[7] != '-')
    {
        cout <<"INCORRECT";
        return 0;
    }

    int nam  = doi(s[0]) * 1000 + doi(s[1])*100 + doi(s[2])*10 + doi(s[3]);
    int thang = doi(s[5])*10 + doi(s[6]);
    int ngay = doi(s[8])*10 + doi(s[9]);
    if(1<= ngay && ngay <= 31)
    {
        if(1<= thang && thang <= 12)
        {
            if(thang == 2 && ngay >= 29)
            {
                if(nam % 4 == 0 && ngay == 29) cout <<"CORRECT";
                else cout <<"INCORRECT";
                return 0;
            }
            if(ngay > 30 && (thang == 2 || thang == 4 || thang == 6 || thang == 9 || thang == 11))
            {
                   cout <<"INCORRECT";
                   return 0;
            }
            cout << nam <<" "<<thang <<" "<<ngay;
            return 0;
        }
        else cout <<"INCORRECT";
    }
    else cout <<"INCORRECT";
   

}
