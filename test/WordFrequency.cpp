#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main() {
    string inputLine;
    map<string,int> database;
    while (getline (cin, inputLine))
    {
        // xử lý tách xâu thành các word
        stringstream ss(inputLine);
        string word;
        while (ss >> word) {
        if (database.find(word) != database.end()) {
            database[word] += 1;
        } else {
            database.insert(pair<string,int>(word,1));
        }
        }
    }
    
    for (auto it = database.begin(); it != database.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
}