#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
void priorityQueue()
{
    priority_queue<int> pQ;
    pQ.push(5);
    pQ.push(1);
    pQ.push(100);
    pQ.push(300);
    while (!pQ.empty())
    {
        int e = pQ.top();
        pQ.pop();
        cout << "priority_queue POP " << e << endl;
    }

    priority_queue<pii, vector<pii>, greater<pii>> PQ;
    PQ.push(make_pair(4, 40));
    PQ.push(make_pair(1, 50));
    PQ.push(make_pair(2, 100));
    while (!PQ.empty())
    {
        pii e = PQ.top();
        PQ.pop();
        cout << "PQ POP (" << e.first << "," << e.second << ") " << endl;
    }
}

int main()
{
    priorityQueue();
    return 0;
}