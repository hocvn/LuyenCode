#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 3;
int a[N],b[N],f[N],n;

int main(){

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int res = 0;
    for (int i = 1; i <= n; i++){
        f[i] = lower_bound(b+1,b+1+res,a[i]) - b;
        res = max(res,f[i]);
        b[f[i]] = a[i];
    }
    cout << res;
    return 0;
}
