#include <bits/stdc++.h>
using namespace std;
int n, M;
int x[100];
int T;
bool check(int v, int k)
{
    if (k < n)
    {
        return true;
    }
    return T+v==M; 
}
void Solution()
{
    for (int i = 0; i <= n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
}
void Try(int k)
{
    for (int  i = 0; i < M-T-(n-k); i++)
    {
        /* code */
    }
    
}
int main()
{
    int T = 0;
    Try(1);
}