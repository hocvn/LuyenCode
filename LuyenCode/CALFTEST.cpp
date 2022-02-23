#include <bits/stdc++.h>
using namespace std;

int a[30],b[30],f[30][30005];
int n,v;

int main(){

    scanf("%d%d",&n,&v);
    for (int i = 1; i <= n; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 1; i <= n; i++){
        scanf("%d",&b[i]);
    }
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= v; j++){
            if (j >= a[i]){
                f[i][j] = max(f[i-1][j-a[i]] + b[i], f[i-1][j]);
            }
            else f[i][j] = f[i-1][j];
        }
    }
    cout << f[n][v];
    return 0;
}
