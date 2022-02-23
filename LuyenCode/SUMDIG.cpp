#include <iostream>
using namespace std;

int sum(long long x){

    int y = 0;
    while (x) { y += x % 10; x /= 10; }
    return y;
}
int main(){

    int t;  cin >> t;
    while (t--){
        long long n;
        cin >> n;
        cout << sum(n) << "\n";
    }
    return 0;
}
