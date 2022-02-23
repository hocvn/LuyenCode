#include <iostream>
using namespace std;

int a[22];
int f[22][50005];
int n,c;

int main(){

    cin >> n >> c;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= c; j++){
            if (j >= a[i]) f[i][j] = max(f[i-1][j-a[i]] + a[i], f[i-1][j]);
                else f[i][j] = max(f[i-1][j],f[i][j-1]);
        }
    }
    cout << f[n][c];
    return 0;
}
