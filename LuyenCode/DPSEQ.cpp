#include <iostream>
using namespace std;

int f[10005],n,k;
int a[10005];

int main(){

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int res = 0;
    for (int i = 1; i <= n; i++){
        f[i] = -1e9;
        for (int j = 1; j <= k; j++){
            if (i - j < 0) break;
            f[i] = max(f[i],f[i-j] + a[i]);
        }
        res = max(res,f[i]);
    }
    cout << res;
    return 0;
}
