#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
    cout << __gcd(abs(a),abs(b));
    return 0;
}
