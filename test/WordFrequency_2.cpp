#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    map<string, long> Map;
    string input;
    while (cin >> input)
    {
        Map[input] += 1;
    }
    for (map<string, long>::iterator i = Map.begin(); i != Map.end(); i++)
    {
        cout << i->first << " " << i->second << endl;
    }
    return 0;
}