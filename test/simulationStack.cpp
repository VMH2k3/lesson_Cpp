#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    stack<int> Stack;
    freopen("text.txt", "r", stdin);
    string yc = "";
    int value;
    while (yc != "#")
    {
        cin >> yc;
        if (yc == "PUSH")
        {
            cin >> value;
            Stack.push(value);
        }
        if (yc == "POP")
        {
            if (Stack.empty())
            {
                cout << "NULL" << endl;
            }
            else
            {
                int out = Stack.top();
                Stack.pop();
                cout << out << endl;
            }
        }
    }

    return 0;
}