#include <iostream>
using namespace std;

#define N 303
int n,k;
long long f[N][N][N/2],a[N];
bool d[N][N][N/2];

long long DP(int l,int r,int h){

    if (l >= r || h >= k) return 0;
    if (d[l][r][h]) return f[l][r][h];
    d[l][r][h] = true;
    long long &res = f[l][r][h];
    if ((r-l+1) / 2 + h < k) return res;

    res = max(DP(l+1,r,h),DP(l,r-1,h));
    res = max(res,DP(l+2,r,h+1) + abs(a[l]-a[l+1]));
    res = max(res,DP(l,r-2,h+1) + abs(a[r]-a[r-1]));
    res = max(res,DP(l+1,r-1,h+1) + abs(a[r]-a[l]));
    return res;
}
int main(){

    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cout << DP(1,n,0);
    return 0;
}
