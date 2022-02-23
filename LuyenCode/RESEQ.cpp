#include <iostream>
using namespace std;

#define ll long long
#define N 1000010
const ll mod = 1e9 + 7;
ll n,l,r,f[N][3];
ll khong,mot,hai;

void init(){

	int x,y;
	for (y = r; y % 3 != 0; y--);
	for (x = l; x % 3 != 0; x++);
	khong = (y-x) / 3 + 1;

	for (y = r; y % 3 != 1; y--);
	for (x = l; x % 3 != 1; x++);
	mot = (y-x) / 3 + 1;

	for (y = r; y % 3 != 2; y--);
	for (x = l; x % 3 != 2; x++);
	hai = (y-x) / 3 + 1;
}
int main(){

	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> l >> r;
	init();
	f[1][0] = khong;
	f[1][1] = mot;
	f[1][2] = hai;
	for (int i = 2; i <= n; i++){
		f[i][0] = (f[i-1][0] * khong % mod + f[i-1][1] * hai % mod + f[i-1][2] * mot % mod) % mod;
		f[i][1] = (f[i-1][0] * mot % mod + f[i-1][1] * khong % mod + f[i-1][2] * hai % mod) % mod;
		f[i][2] = (f[i-1][0] * hai % mod + f[i-1][1] * mot % mod + f[i-1][2] * khong % mod) % mod;
	}
	cout << f[n][0] % mod;
	return 0;
}
