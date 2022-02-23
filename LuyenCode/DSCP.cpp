#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

int main(){

    ll l,r;
    cin >> l >> r;
    ll a = ceil(sqrtl(l));
    ll b = floor(sqrtl(r));
    cout << b - a + 1;
    return 0;
}
