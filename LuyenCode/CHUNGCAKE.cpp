#include <iostream>
#include <algorithm>
using namespace std;

int a[50],f[32][2002];
int n,v;

int main(){

    cin >> n >> v;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= v; j++){
            if (j - a[i] >= 0){
                f[i][j] = max(f[i-1][j-a[i]] + a[i], f[i-1][j]);
            }
            else f[i][j] = max(f[i][j], f[i-1][j]);
        }
    }
    cout << f[n][v];
    return 0;
}
