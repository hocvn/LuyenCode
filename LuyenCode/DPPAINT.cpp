#include <iostream>
using namespace std;

#define N 100010
const int inf = 1e9;
int n,t,a[N][3],f[N][3];

void DP(){

    for (int i = 1; i < n; i++){
        for (int j = 0; j < 3; j++) f[i][j] = inf;
    }
    for (int i = 0; i < 3; i++) f[0][i] = a[0][i];

    for (int i = 1; i < n; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                if (j != k) f[i][j] = min(f[i][j],f[i-1][k] + a[i][j]);
            }
        }
    }
    int ans = min(min(f[n-1][0],f[n-1][1]),f[n-1][2]);
    printf("%d\n",ans);
}
int main(){

    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    DP();
    return 0;
}
