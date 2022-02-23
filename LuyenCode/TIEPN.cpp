#include <iostream>
using namespace std;

#define ll long long
const int mod = 1e6+7;
string s;
ll m;

int phi(int n) {

    int res = n;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            res -= res / i;
        }
    }
    if (n != 1) {
        res -= res / n;
    }
    return res;
}

ll power(int a,int b){

    if (b == 0) return 1;
    ll t = power(a,b/2);
    t = t*t % mod;
    if (b & 1) t = t*a % mod;
    return t;
}
int main(){

    cin >> s;
    for (int i = 0; i < s.length(); i++)
        m = (m*10 + s[i] - '0') % mod;
    int Phi = phi(mod);
    int rev = power(2,Phi-1);
    cout << (2*m*m % mod) * rev % mod;
    return 0;
}
