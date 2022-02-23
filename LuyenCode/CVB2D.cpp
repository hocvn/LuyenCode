#include <iostream>
#include <cstring>
using namespace std;

unsigned long long mu[65];
char s[65];

void solve(){

    unsigned long long ans = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        ans += (s[n-i-1] - '0') * mu[i];
    cout << ans << "\n";
}
int main(){

    mu[0] = 1;
    for (int i = 1; i <= 63; i++)
        mu[i] = mu[i-1]*2;

    int t;
    scanf("%d\n",&t);
    while (t--){
        scanf("%s", s);
        solve();
    }
    return 0;
}
