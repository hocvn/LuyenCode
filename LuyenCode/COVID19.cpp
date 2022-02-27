#include <iostream>
using namespace std;

int main(){

    long long n,k;
    cin >> k >> n;
    if (!k) return cout << 0, 0;
    if (!n) return cout << 1, 0;
    long long ans = 0, p = 1;

    while (n--){
        (ans += p) %= 2021;
        (p *= k) %= 2021;
    }
    cout << ans;
    return 0;
}
