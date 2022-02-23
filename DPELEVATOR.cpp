#include <iostream>
#include <algorithm>
using namespace std;

#define N 40004
#define K 404
int n,h[K],c[K],a[K],p[K],res;
bool f[N][2];

bool cmp(int x,int y){

	return a[x] < a[y];
}
int main(){

	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> h[i] >> a[i] >> c[i];
		p[i] = i;
	}
	sort(p+1,p+n+1,cmp);
	f[0][0] = f[0][1] = true;

	int x = 0, y = 1;
	for (int t = 1; t <= n; t++){
		int i = p[t];
		for (int j = 1; j <= c[i]; j++){
			for (int hight = a[i]; hight > 0; hight--){
				if (h[i]*j <= hight){
					f[hight][y] |= f[hight-h[i]*j][x];
					if (f[hight][y]) res = max(res,hight);
				}
			}
		}
		x ^= 1; y ^= 1;
	}
	cout << res;
	return 0;
}
