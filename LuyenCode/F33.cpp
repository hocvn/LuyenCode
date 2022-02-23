#include <iostream>
using namespace std;

#define ll long long
ll n;

int main(){

	cin >> n;
	if (n & 1 == 0){
		cout << -1;
		return 0;
	}
	ll number = 3;
	for (int i = 1; i <= 10000000; i++){
		if (number % n == 0){
			cout << i;
			return 0;
		}
		number = (number*10+3) % n;
	}
	cout << -1;
	return 0;
}
