#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set<string> database;
    string key;

    while (cin >> key) {
        if (key == "*") {
            break;
        }
        database.insert(key);
    }

    string cmd ="";
    string result;
    while (cmd != "***") {
        cin >> cmd >> key;
        if (cmd == "find") {
            if (database.count(key)) {
                result.insert(result.length(), "1\n");
            } else {
                result.insert(result.length(), "0\n");
            }
        } else if (cmd == "insert") {
            if (database.count(key)) {
                result.insert(result.length(), "0\n");
            } else {
                database.insert(key);
                result.insert(result.length(), "1\n");
            }
        }
    }
    cout << result;
    return 0;
}