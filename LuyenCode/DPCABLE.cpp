#include <iostream>
using namespace std;

#define N 25010
#define ll long long
ll f[N],a[N],n;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> n;
	for (int i = 1; i < n; i++) cin >> a[i];
	f[1] = a[1];
	a[n] = 1e18;
	for (int i = 2; i <= n; i++){
		f[i] = min(f[i-2] + a[i-1],f[i-1] + a[i]);
	}
	cout << f[n];
	return 0;
}
