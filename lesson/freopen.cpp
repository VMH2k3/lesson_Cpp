#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("text.txt", "r", stdin);
    char word[100];
    int n = 0;

    while (!feof(stdin))
    {
        char c = fgetc(stdin);
        if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || (c <= '9' && c >= '0'))
        {
            n++;
            word[n - 1] = c;
        }
        else
        {
            word[n] = '\0';
            cout << word << endl;
            n = 0;
        }
        // cout << c;
    }
}