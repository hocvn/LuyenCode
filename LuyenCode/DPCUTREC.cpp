#include <iostream>
#include <algorithm>
using namespace std;

#define N 1010
int f[N][N],n,m;

void init(){

    if (n > m) swap(n,m);
    for (int i = 1; i <= m; i++){
        f[i][i] = 1;
        f[1][i] = f[i][1] = i;
    }
}
void DP(){

    for (int i = 2; i <= n; i++){
        for (int j = i+1; j <= m; j++){
            if (f[i][j]) continue;
            f[i][j] = 1e9;
            for (int k = 1; k <= i/2; k++) f[i][j] = min(f[i][j],f[i-k][j]+f[k][j]);
            for (int k = 1; k <= j/2; k++) f[i][j] = min(f[i][j],f[i][j-k]+f[i][k]);
            if (!f[j][i]) f[j][i] = f[i][j];
            else f[i][j] = f[j][i] = min(f[i][j],f[j][i]);
            for (int k = 2; k*i <= n && k*j <= m; k++){
                f[i*k][j*k] = f[i][j];
                if (i*k <= m && j*k <= n) f[j*k][i*k] = f[i][j];
            }
        }
    }
}
int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    init();
    DP();
    cout << f[n][m];
    return 0;
}
