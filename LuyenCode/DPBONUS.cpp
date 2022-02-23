#include <iostream>
using namespace std;

#define N 1010
#define ll long long
ll a[N][N],res;
int n,k;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            ll x; cin >> x;
            a[i][j] = a[i-1][j] + a[i][j-1] - a[i-1][j-1] + x;
        }
    }
    for (int i = k; i <= n; i++){
        for (int j = k; j <= n; j++){
            ll tmp = a[i][j] - a[i-k][j] - a[i][j-k] + a[i-k][j-k];
            res = max(res,tmp);
        }
    }
    cout << res;
    return 0;
}
