#include <iostream>
#include <cstring>
using namespace std;

#define ll long long
string n,m;
ll k;

ll process(){

	ll ans = 0;
	for (int i = 0; i < n.size(); i++){
		ans = (ans*10 + n[i] - '0') % k;
	}
	return ans;
}
int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> k;
	ll a = process(), ans = 1, tmp = a;

	for (int i = m.size()-1; i >= 0; i--){
		for (int j = 0; j < m[i]-'0'; j++) ans = ans * tmp % k;
		ll temp = 1;
		for (int j = 0; j < 10; j++) temp = temp * tmp % k;
		tmp = temp;
	}
	cout << ans;
	return 0;
}
