#include <iostream>
using namespace std;

const int inf = 1e9;
int f[100005],a[25];
int n,m;

int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    fill(f,f+m+1,inf);
    f[0] = 0;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++)
            if (i >= a[j] && f[i-a[j]] != inf) f[i] = min(f[i],f[i-a[j]] + 1);
    }
    if (f[m] != inf) cout << f[m];
        else cout << -1;
    return 0;
}
