#include <iostream>
using namespace std;

#define N 60010
int t[N],r[N],f[N],n;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> t[i];
	for (int i = 1; i < n; i++) cin >> r[i];

	f[1] = t[1];
	for (int i = 2; i <= n; i++){
		f[i] = min(f[i-1]+t[i],f[i-2]+r[i-1]);
	}
	cout << f[n];
	return 0;
}
