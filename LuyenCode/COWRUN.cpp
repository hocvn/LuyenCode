#include <iostream>
using namespace std;

#define N 10010
#define K 505
int a[N],f[N][K],n,m;

int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= min(i,m); j++){
            f[i][j] = f[i-j][0] + a[i] - a[i-j];
        }
        f[i][0] = f[i-1][0];
        for (int j = 1; j <= min(i,m); j++){
            f[i][0] = max(f[i][0],f[i-j][j]);
        }
    }
    cout << f[n][0];
    return 0;
}
