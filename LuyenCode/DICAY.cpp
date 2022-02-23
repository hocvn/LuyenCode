#include <iostream>
using namespace std;

int a[30],b[30],f[30][300000];
int n, s;

int main(){

    cin >> n >> s;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= s; j++){
            if (j >= a[i]) f[i][j] = max(f[i-1][j-a[i]] + b[i],f[i-1][j]);
                else f[i][j] = f[i-1][j];
            }
    }
    cout << f[n][s];
    return 0;
}
