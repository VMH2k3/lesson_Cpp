#include <bits/stdc++.h>
using namespace std;
void demomap()
{
    map<string, int> M;
    M["abc"] = 1;  // map the key abc with value 1
    M["def"] = 2;  // map the key def with value 2
    M["xyz"] = 10; // map the key xyz with value 10
    string k = "abc";
    cout << "value of key " << k << " = " << M[k] << endl;
    for (map<string, int>::iterator i = M.begin(); i != M.end(); i++)
    {
        cout << i->first << "is mapped to value " << i->second << endl;
    }
}

int main()
{
    demomap();
}