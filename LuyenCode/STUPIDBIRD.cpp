#include <iostream>
#include <algorithm>
using namespace std;

#define N 100010
int a[N],b[N],n,h;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> h;
    for (int i = 1,x; i <= n; i++){
        cin >> x;
        if (x > 0) a[x]++; else b[h+x+1]++;
    }
    for (int i = h; i > 0; i--) a[i] += a[i+1];
    int res = n;
    for (int i = 1; i <= h; i++){
        b[i] += b[i-1];
        res = min(res,b[i]+a[i]);
    }
    cout << res;
    return 0;
}
