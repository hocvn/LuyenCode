#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    long long m,n;
    cin >> n >> m;
    cout << m - __gcd(n,m);
    return 0;
}
