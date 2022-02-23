#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    long long a,b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    cout << a*b / __gcd(a,b);
    return 0;
}
