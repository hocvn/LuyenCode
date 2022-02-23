#include <iostream>
#define ll long long
using namespace std;

struct matrix{
    ll mt[2][2];
} basic;
const ll mod = 1e9 + 7;
ll n;

matrix operator * (matrix a, matrix b){

    matrix c;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            c.mt[i][j] = 0;
            for (int k = 0; k < 2; k++){
                c.mt[i][j] = (c.mt[i][j] + a.mt[i][k]*b.mt[k][j]) % mod;
            }
        }
    }
    return c;
}
matrix pow_mod(ll n){

    if (n == 1) return basic;
    matrix tmp = pow_mod(n/2);
    tmp = tmp * tmp;
    if (n & 1) tmp = tmp * basic;
    return tmp;
}
int main(){

    cin >> n;
    if (n == 0){ cout << 1; return 0; }
    basic.mt[0][0] = 0;
    basic.mt[0][1] = basic.mt[1][0] = basic.mt[1][1] = 1;
    matrix ans = pow_mod(n);
    cout << ans.mt[1][1];
    return 0;
