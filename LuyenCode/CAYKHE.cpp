#include <iostream>
using namespace std;

#define M 10010
int n,m,f[50][M];

int main(){

    cin >> n >> m;
    for (int i = 1,w,v; i <= n; i++){
        cin >> w >> v;
        for (int j = 1; j <= m; j++){
            f[i][j] = f[i-1][j];
            if (j >= w) f[i][j] = max(f[i][j],f[i-1][j-w] + v);
        }
    }
    cout << f[n][m];
    return 0;
}
