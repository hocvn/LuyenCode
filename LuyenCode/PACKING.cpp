#include <iostream>
using namespace std;

#define N 100010
int n,v,a[50];
bool f[N];

int main(){

    cin >> n >> v;
    for (int i = 1; i <= n; i++) cin >> a[i];
    f[0] = true;
    for (int i = 1; i <= n; i++){
        for (int j = v; j > 0; j--){
            if (j >= a[i]) f[j] |= f[j-a[i]];
        }
    }
    int ans = 0;
    for (int i = v; i > 0; i--){
        if (f[i]){ ans = i; break; }
    }
    cout << ans;
    return 0;
}
