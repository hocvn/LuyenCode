#include <iostream>
using namespace std;

int a[1001][1001],f[1001][1001];
int n,m;

int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 2; i <= m; i++)
        f[0][i] = -1;
    for (int i = 2; i <= n; i++)
        f[i][0] = -1;
    int x,y;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (max(f[i-1][j],f[i][j-1]) < 0 || a[i][j] == -1){
                f[i][j] = -1;
                continue;
            }
            f[i][j] = max(f[i-1][j],f[i][j-1]) + a[i][j];
        }
    }
    cout << f[n][m];
    return 0;
}
