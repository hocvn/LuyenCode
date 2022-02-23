#include <iostream>
using namespace std;

#define N 1000010
bool f[N];
int k, l, t, n;

void DP() {
    if (l > k)
        swap(k, l);
    for (int i = 1; i <= N - 10; i++) {
        if (i >= k)
            f[i] = !f[i - 1] || !f[i - k] || !f[i - l];
        else if (i >= l)
            f[i] = !f[i - 1] || !f[i - l];
        else
            f[i] = !f[i - 1];
    }
}
int main() {
    scanf("%d%d%d", &t, &l, &k);
    DP();
    while (t--) {
        scanf("%d", &n);
        if (f[n])
            putchar('A');
        else
            putchar('B');
    }
    return 0;
}
