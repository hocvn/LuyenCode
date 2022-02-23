#include <iostream>
using namespace std;

int n,m,a[1000001];

int main(){

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int step = 1, k, pos = (n+1) / 2;
    if (n % 2) k = -1;
        else k = 1;

    for (int i = 1; i <= m; i++){
        cout << a[pos] << " ";
        pos = pos + k*step;
        k = -k;
        step++;
    }
    return 0;
}
