#include <bits/stdc++.h>
using namespace std;
#define N 10000000
long sc[N], sl[N];
int a[N];
bool bc[N], bl[N];
int n;
void input()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
}
int main()
{
    input();
    if (a[1] % 2 == 0)
    {
        sc[1] = a[1];
        bc[1] = true;
        bl[1] = false;
    }
    else
    {
        sl[1] = a[1];
        bl[1] = true;
        bc[1] = false;
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] % 2 == 0) // neu a la so chan
        {
            if (bc[i - 1] == true)
            {
                if (sc[i - 1] >= 0)
                {
                    sc[i] = sc[i - 1] + a[i];
                    bc[i] = true;
                }
                else
                {
                    sc[i] = a[i];
                    bc[i] = true;
                }
            }
            else
            {
                sc[i] = a[i];
                bc[i] = true;
            }
            if (bl[i - 1] == true)
            {
                sl[i] = sl[i - 1] + a[i];
                bl[i] = true;
            }
            else
            {
                bl[i] = false;
            }
        }
        else
        { // neu a la so le
            if (bl[i - 1] == true)
            {
                sc[i] = sl[i - 1] + a[i];
                bc[i] = true;
            }
            else
            {
                bc[i] = false;
            }
            if (bc[i - 1] = true)
            {
                if (sc[i - 1] >= 0)
                {
                    sl[i] = sc[i - 1] + a[i];
                    bl[i] = true;
                }
                else
                {
                    sl[i] = a[i];
                    bl[i] = true;
                }
            }
            else
            {
                sl[i] = a[i];
                bl[i] = true;
            }
        }
    }
    long res = -1000000;
    for (int i = 1; i <= n; i++)
    {
        if (sc[i] > res)
        {
            res = sc[i];
        }
    }
    cout << "Tong chan lon nhat la: " << res;

    return 0;
}
