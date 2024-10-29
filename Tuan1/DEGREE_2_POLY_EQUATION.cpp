#include <bits/stdc++.h>
#define Task "bai1"

using namespace std;

double a, b, c;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);cout.tie(NULL);
    if(fopen(Task".inp", "r"))
    {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if(a == 0)
    {
        if(b == 0) cout << "NO SOLUTION";
        else cout << fixed << setprecision(2) << -c/b;
    }
    if(delta < 0)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        if(delta == 0)
        {
            cout << fixed << setprecision(2) << -b/(2*a);
        }
        else
        {
            double x1 = (-b +sqrt(delta))/(2*a);
            double x2 = (-b -sqrt(delta))/(2*a);
            if(x2 < x1) swap(x1, x2);
            cout << fixed << setprecision(2) << x1 <<" "<<x2;

        }
    }

}
