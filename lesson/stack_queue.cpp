#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> S;
    for (int i = 0; i < 5; i++)
    {
        S.push(i); // insert sn element inyo
        cout << "PUSH" << i << endl;
    }
    while (!S.empty())
    {
        int e = S.top(); // access to the item on top off the stack
        S.pop();
        cout << "POP" << e << endl;
    }

    // demo
    queue<int> Q;
    for (int e = 0; e < 5; e++)
    {
        Q.push(e);
        cout << "Queue push " << e << endl;
    }

    while (!Q.empty())
    {
        int e = Q.front();
        Q.pop();
        cout << "Queue POP " << e << endl;
    }

    return 0;
}