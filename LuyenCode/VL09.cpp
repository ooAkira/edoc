#include <bits/stdc++.h>
using namespace std;

int giaithua(int n)
{
    int gt = 1;
    for (int i = 2; i <= n; i++)
        gt *= i;
    return gt;
}
int main()
{
    int n;
    double x, sum = 0.0;
    do
    {
        cin >> x >> n;
    } while ((x <= -10 && x >= 10) && n >= 10);
    for (int i = 1; i <= n; i++)
        sum += (pow(x, i) / giaithua(i));
    cout << setprecision(2) << fixed << sum;
    return 0;
}