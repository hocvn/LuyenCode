#include <iostream>
#include <vector>
using namespace std;

#define N 2002
#define sz(a) (int)a.size()
#define ll long long
const ll base = 1e8;
typedef vector <ll> bignum;

bignum f[N];
int n,k;
bool dau[N];

bignum operator + (bignum a, bignum b){

	ll carry = 0;
	bignum c;
	for (int i = 0; i < sz(a) || i < sz(b); i++){
		if (i < sz(a)) carry += a[i];
		if (i < sz(b)) carry += b[i];
		c.push_back(carry % base);
		carry /= base;
	}
	if (carry) c.push_back(carry);
	return c;
}
void print(bignum ans){

	if (ans.empty()){ printf("0\n"); return; }
	printf("%lld",ans.back());
	for (int i = sz(ans)-2; i >= 0; i--) printf("%.08lld",ans[i]);
	putchar('\n');
}
int main(){

    cin >> n >> k;
    for (int i = 1,x; i <= k; i++){
        cin >> x;
        dau[x] = true;
    }
    f[0].push_back(1);
    f[1].push_back(1);
    for (int i = 2; i <= n; i++){
        if (dau[i]) continue;
        if (!dau[i-2]) f[i] = f[i] + f[i-2];
        if (!dau[i-1]) f[i] = f[i] + f[i-1];
    }
    print(f[n]);
    return 0;
}
