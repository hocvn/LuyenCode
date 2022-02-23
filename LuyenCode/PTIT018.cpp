
#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull f[100],k;

char solve(int n,ull k) {

    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (k <= f[n - 2])
        return solve(n - 2, k);
    else
        return solve(n - 1, k - f[n - 2]);
}

int main() {

    f[1] = f[2] = 1;
    for (int i = 2; i < 100; i++)
        f[i] = f[i - 1] + f[i - 2];

    int t,n;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << solve(n, k) << "\n";
    }
    return 0;
}
