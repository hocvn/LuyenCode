#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5+5;
const ll MOD = 1e6+7;

int n, k;
ll dp[N][105];
bool avail[N][105];

void init(){

    int temp = 2;
    for (int i = 1; i <= n; i++){
        avail[i][k] = true;
        dp[i][k] = temp;
        temp = 2*temp%MOD;
    }
}
ll get_res(int pos, int x){

    if (pos == 0) return x == k;
    if (avail[pos][x]) return dp[pos][x];

    avail[pos][x] = true;
    return dp[pos][x] = (get_res(pos-1, 0) + get_res(pos-1, x+1))%MOD;
}
int main(){

    cin >> n >> k;
    if (n < k) return cout << 0, 0;
    init();
    cout << get_res(n, 0);
    return 0;
}
