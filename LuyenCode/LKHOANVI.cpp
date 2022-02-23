#include<iostream>
using namespace std;

int n;
int dau[20] = {0};
int a[20];

void xuat(){

    for (int i = 1; i < n; i++)
        cout << a[i] << " ";
    cout << a[n] << "\n";
}

void dequy(int k) {

    for (int i = 1; i <= n; i++) {
        if (!dau[i]) {
            a[k] = i;
            dau[i] = 1;
            if (k == n) xuat();
            else dequy(k + 1);
            dau[i] = 0;
        }
    }
}

int main() {

    cin >> n;
    dequy(1);
    return 0;
}
