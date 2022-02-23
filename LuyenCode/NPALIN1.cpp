#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){

    int n;
    while (cin >> n){
        if (n == 1){
            cout << 9 << "\n";
            continue;
        }
        int m = n / 2;
        ll tmp = (ll)pow(10,m-1) * 9;
        if (n & 1) cout << tmp*10 << "\n";
            else cout << tmp << "\n";
    }
    return 0;
}
