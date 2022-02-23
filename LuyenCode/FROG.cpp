#include <iostream>
using namespace std;

int n,k,a[50];
long long f[100];

int main(){

    cin >> n >> k;
    for (int i = 1; i <= k; i++) cin >> a[i];
    f[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= k; j++){
            if (i >= a[j]) f[i] += f[i-a[j]];
        }
    }
    cout << f[n];
    return 0;
}
