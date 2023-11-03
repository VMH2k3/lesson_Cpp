#include <bits/stdc++.h>
using namespace std;
#define N 10001

int x[N], y[N];
int s[N][N];
int n, m;
char trace[N][N];
void input()
{
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        cin >> x[i];
    }
    for (int j = 0; j <= m; j++)
    {
        cin >> y[j];
    }
}

int main()
{
    input();
    for (int i = 0; i <= n; i++)
    {
        s[i][0] = 0;
    }

    for (int j = 0; j <= m; j++)
    {
        s[0][j] = 0;
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (x[i] == y[j])
            {
                s[i][j] = s[i - 1][j - 1] + 1;
                trace[i][j] = 'D';
            }
            else
            {
                if (s[i - 1][j] > s[i][j - 1])
                {
                    s[i][j] = s[i - 1][j];
                    trace[i][j] = 'U';
                }
                else
                {
                    s[i][j] = s[i][j - 1];
                    trace[i][j] = 'L';
                }
            }
        }
    }
    int i = n;
    int j = m;
    while (i > 0 && j > 0)
    {
        if (trace[i][j] = 'D')
        {
            cout << x[i] << " ";
            i = i - 1;
            j = j - 1;
        }
        else if (trace[i][j] == 'U')
        {
            i = i - 1;
        }
        else if (trace[i][j] == 'L')
        {
            j = j - 1;
        }
    }

    return 0;
}