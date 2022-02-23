#include <iostream>
using namespace std;

#define N 1010
int a[N],f[N][N],n;
bool avail[N][N];

int DP(int j,int vou){

    if (j > n) return 0;
    if (avail[j][vou]) return f[j][vou];
    avail[j][vou] = true;
    if (a[j] > 100) f[j][vou] = DP(j+1,vou+1) + a[j];
    else f[j][vou] = DP(j+1,vou) + a[j];
    if (vou > 0) f[j][vou] = min(f[j][vou],DP(j+1,vou-1));
    return f[j][vou];
}
int main(){

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cout << DP(1,0);
    return 0;
}
