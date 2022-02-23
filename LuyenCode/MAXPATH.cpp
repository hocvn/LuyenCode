#include <iostream>
using namespace std;

int a[101][101],f[101][101];
int n,m;

int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i <= m; i++)
        f[0][i] = f[n+1][i] = -1e9;

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            f[j][i] = max(max(f[j-1][i-1],f[j][i-1]),f[j+1][i-1]) + a[j][i];
        }
    }
    int res = -1e9;
    for (int i = 1; i <= n; i++)
        res = max(res,f[i][m]);
    cout << res;
    return 0;
}
