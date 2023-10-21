#include <bits/stdc++.h>
using namespace std;
int n,m;
int T = 0;
int x[1000];

bool check(int v,int k){
    if (k < n) return true;
      else return (T + v == m);
}

void printSolution(){
    for (int i = 1; i <= n; i++) cout << x[i] << " ";
    cout << endl;
}

void solve(int k){
    for (int v = 1; v <= m-T-(n-k); v++) {
        if (check(v,k)) {
            x[k] = v;
            T += v;
            if (k == n) printSolution();
              else solve(k+1);
            T -= v;
        }
    }
}

int main() {
    cin >> n >> m;
    solve(1);
}
