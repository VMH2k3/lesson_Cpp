#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long a, b; // kiếu số dương long
    cin >> a >> b;
    unsigned long c = (a % 10) + (b % 10);
    a = a / 10;
    b = b / 10;
    unsigned long sum = a + b + c / 10;
    if (sum > 0)
    {
        cout << sum << c % 10;
    }
    if (sum == 0)
        cout << c;
}