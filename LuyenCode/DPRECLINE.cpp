#include <iostream>
using namespace std;

#define N 10010
long long a[N],b[N],f[N],g[N];

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
    f[1] = b[1];
    g[1] = a[1];
    for (int i = 2; i <= n; i++){
        f[i] = max(abs(a[i] - a[i-1]) + b[i] + f[i-1],abs(a[i] - b[i-1]) + b[i] + g[i-1]);
        g[i] = max(abs(b[i] - a[i-1]) + a[i] + f[i-1],abs(b[i] - b[i-1]) + a[i] + g[i-1]);
    }
    cout << max(f[n],g[n]);
    return 0 ;
