#include <iostream>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;

ll power(ll a, ll n){

    if (n == 0) return 1;
    ll tmp = power(a,n/2);
    tmp = (tmp * tmp) % mod;
    if (n & 1) tmp = (a * tmp) % mod;
    return tmp;
}
int main(){

    ll a,n;
    cin >> a >> n;
    cout << power(a,n);
    return 0;
}
