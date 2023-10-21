#include <iostream>
using namespace std;
#define N 1000
int n, M, f, res;
int a[N], t[N], X[N];
void input()
{
    cin >> n;
    cin >> M;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}
void initT()
{
    t[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        t[i] = t[i - 1] + a[i];
    }
}
void Try(int k)
{
    for (int i = 1; i <= (M - f - ((t[n] - t[k]) / a[k])); i++)
    {
        X[k] = i;
        f += a[k] * X[k];
        if (k == n)
        {
            if (f == M)
            {
                res += 1;
            }
        }
        else
        {
            Try(k + 1);
        }
        f -= X[k] * a[k];
    }
}
void solve()
{
    f = 0;
    res = 0;
    input();
    initT();
    Try(1);
    cout << res;
}
int main()
{
    solve();
    return 0;
}