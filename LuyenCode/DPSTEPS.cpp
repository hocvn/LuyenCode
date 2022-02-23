#include <iostream>
using namespace std;

#define ll long long
#define N 100010
const int mod = 1000000007;
ll f[N];
int n,k;
bool dau[N];

int main(){

    cin >> n >> k;
    for (int i = 1,x; i <= k; i++){
        cin >> x;
        dau[x] = true;
    }
    f[0] = f[1] = 1;
    for (int i = 2; i <= n; i++){
        if (dau[i]) continue;
        if (!dau[i-2]) f[i] += f[i-2];
        if (!dau[i-1]) f[i] += f[i-1];
        f[i] %= mod;
    }
    cout << f[n];
    return 0;
}
