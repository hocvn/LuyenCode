#include <iostream>
using namespace std;

long long a[30],b[30],n,s;
long long f[30][30003];

int main(){

    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= s; j++){
            if (j >= a[i]) f[i][j] = max(f[i-1][j-a[i]] + b[i], f[i-1][j]);
                else f[i][j] = f[i-1][j];
        }
    }
    cout << f[n][s];
    return 0;
}
