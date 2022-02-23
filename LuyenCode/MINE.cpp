#include <iostream>
using namespace std;

#define ll long long
#define N 200002
const int mod = 1e6 + 3;
ll dp[N*2],catalan[N];
int n,m,a[N*2];

ll power(ll x,ll y){

    if (!y) return 1;
    ll t = power(x,y/2);
    t = t * t % mod;
    if (y & 1) t = t * x % mod;
    return t;
}
void enter(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    n *= 2;
    for (int i = 1; i <= n; i++) cin >> a[i];
}
void init(){

    ll x = 1, y = 1;
    catalan[0] = 1;
    for (int i = 1; i <= n/2; i++){
        (x *= 1LL * (i*2) % mod * (i*2-1) % mod) %= mod;
        (y *= 1LL * i * (i+1) % mod) %= mod;
        catalan[i] = x * power(y,mod-2) % mod;
        if (i == 23170){
            x++; x--;
        }
    }
}
void solve(){

    if (a[n] - a[1] <= m){
        cout << catalan[n/2];
        return;
    }
    dp[0] = 1;
    for (int i = 2; i <= n; i += 2){
        for (int j = i-1; j > 0 && a[i]-a[j] <= m; j--){
            (dp[i] += dp[j-1] * catalan[(i-j-1)/2]) %= mod;
        }
    }
    cout << dp[n];
}
int main(){
    
    enter();
    init();
    solve();
    return 0;
}
