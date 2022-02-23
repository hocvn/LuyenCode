#include <iostream>
using namespace std;

#define N 1010
int a[N][N],f[N][N],n;
bool avail[N][N];

int DP(int i,int j){

    if (i == n || j == n) return 0;
    if (avail[i][j]) return f[i][j];
    avail[i][j] = true;
    int m = max(i,j) + 1;
    f[i][j] = min(DP(m,j) + a[i][m],DP(i,m) + a[j][m]);
    return f[i][j];
}
int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    }
    cout << DP(0,0);
    return 0;
}
