#include <iostream>
#include <algorithm>
using namespace std;

#define N 6006
int a[N],f[N],n,L;

int main(){

    cin >> n >> L;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i-1];
        f[i] = 1e9;
    }
    for (int i = 1; i <= n; i++){
        for (int j = i; j > 0 && a[i]-a[j-1] <= L; j--){
            f[i] = min(f[i],max(f[j-1],L-(a[i]-a[j-1])));
        }
    }
    cout << f[n];
    return 0;
}
