#include <iostream>
using namespace std;

#define N 1000010
#define ll long long
ll f[N][2],x;
int n;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x;
        f[i][0] = max(f[i-1][0],f[i-1][1] + x);
        f[i][1] = max(f[i-1][1],f[i-1][0] - x);
    }
    cout << max(f[n][0],f[n][1]);
    return 0;
}
