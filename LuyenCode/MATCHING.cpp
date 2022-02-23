#include <iostream>
using namespace std;

#define get(i,j) (j & (1<<i))
const int mod = 1e9 + 7;
int a[22][22],f[1<<21],n;

int main(){

    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cin >> a[i][j];
    }
    f[0] = 1;
    for (int state = 0; state < (1<<n); state++){
        int s = state, cnt = 0;
        while (s) { cnt += s & 1; s >>= 1; }
        for (int i = 0; i < n; i++){
            if (!get(i,state) && a[cnt][i]){
                f[state | (1<<i)] = (f[state | (1<<i)] + f[state]) % mod;
            }
        }
    }
    cout << f[(1<<n)-1];
    return 0;
}
