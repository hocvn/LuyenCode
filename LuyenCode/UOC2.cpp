#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
    long long res = 0;
    int gcd = __gcd(a,b);
    for (int i = 1; i*i <= gcd; i++){
        if (gcd % i == 0) res += i + gcd/i;
        if (i * i == gcd) res -= i;
    }
    cout << res;
}
