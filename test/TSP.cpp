#include <bits/stdc++.h>
using namespace std;
int n;
int minf = INT_MAX; 
int f = 0;
int a[1000][1000];
bool visited[1000];
int x[1000];
int Cmin = INT_MAX;

bool check(int v){
    return visited[v] == false;
}


void solve(int k){
    for (int v = 2; v <= n; v++) {
        if (check(v)) {
            x[k] = v;
            f += a[x[k-1]][v];
            visited[v] = true;
            if (k == n-1) {
                minf = minf < f + a[v][1] ? minf : f + a[v][1]; 
            }
              else if (f + (n-k+1)*Cmin < minf) solve(k+1);
            f -= a[x[k-1]][v];
            visited[v] = false;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i<=n; i++)
        for (int j = 1; j<=n; j++) Cmin = Cmin < a[i][j] ? Cmin : a[i][j];
    x[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    solve(1);
    cout << minf << endl;
}
