#include <bits/stdc++.h>
using namespace std;

int a[3420], b[3420], f[2][12888];
int n, v;

void fastscan(int &x) {
    register int c;
    x = 0;
    c = getchar();
    for (; (c > 47 && c < 58); c = getchar()) x = (x << 1) + (x << 3) + c - 48;
}
int main() {
  
    fastscan(n);
    fastscan(v);
    for (int i = 1; i <= n; i++) {
        fastscan(a[i]);
        fastscan(b[i]);
    }
    int x = 0, y = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= v; j++) {
            if (j >= a[i]) {
                f[y][j] = max(f[x][j - a[i]] + b[i], f[x][j]);
            } else
                f[y][j] = f[x][j];
        }
        x = 1 - x;
        y = 1 - y;
    }
    cout << f[x][v];
    return 0;
}
