#include <iostream>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;
struct matrix {
    ll arr[202][202];
} a;
ll m,n;

matrix operator * (matrix a, matrix b) {

    matrix c;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            c.arr[i][j] = 0;
            for (int k = 1; k <= n; k++)
                c.arr[i][j] = (c.arr[i][j] + ((a.arr[i][k] % mod * b.arr[k][j]) % mod)) % mod;
        }
    }
    return c;
}
matrix power(ll p) {

    if (p == 1) return a;
    matrix tmp = power(p / 2);
    tmp = tmp * tmp;
    if (p & 1) tmp = a * tmp;
    return tmp;
}
int main() {

    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) cin >> a.arr[i][j];
    }
    matrix ans = power(m);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cout << ans.arr[i][j] << " \n"[j == n];
    }
    return 0;
}
