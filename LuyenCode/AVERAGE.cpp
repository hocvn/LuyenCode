#include <iostream>
#include <algorithm>
using namespace std;

#define N 202
#define ll long long
const int mod = 1e9 + 7;
int a[N],n,b,t,Min,Max;
ll f[N][N*N*2],res;

void reset(){

	for (int i = 1; i <= n; i++){
		for (int j = 0; j <= Max+Min; j++) f[i][j] = 0;
	}
}
ll DP(){

	for (int i = 1; i <= n; i++){
		for (int j = -Min; j <= Max; j++){
            f[i][j+Min] = f[i-1][j+Min];
			if (j-a[i] > Max+Min || j-a[i] < -Min) continue;
			f[i][j+Min] = (f[i-1][j-a[i]+Min] + f[i-1][j+Min]) % mod;
		}
		f[i][a[i]+Min]++;
		f[i][a[i]+Min] %= mod;
	}
	return f[n][Min];
}
int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	while (t--){
		cin >> n >> b;
		Min = Max = 0;
		for (int i = 1; i <= n; i++){
			cin >> a[i], a[i] -= b;
			if (a[i] < 0) Min += a[i];
			else Max += a[i];
		}
		Min = -Min;
		cout << DP() << '\n';
		reset();
	}
	return 0;
}
