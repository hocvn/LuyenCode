#include <iostream>
#include <cmath>
using namespace std;

int d,n;
long long res;

int solve(int x){

    while (x % 2 == 0){ x /= 2; d++; }
    while (x % 5 == 0){ x /= 5; d--; }
    res = (res * (x % 10)) % 10;
}
int main(){

    cin >> n;
    res = 1;
    if (n == 0 || n == 1){
        cout << 1;
        return 0;
    }
    for (int i = 1; i <= n; i++)
        solve(i);
    d %= 4;
    if (d == 0) d = 4;
    res *= pow(2,d);
    cout << res % 10;
    return 0;
}
