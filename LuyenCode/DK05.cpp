#include <iostream>
#include <cmath>
using namespace std;

int main(){

    long long n,m;
    cin >> n;
    if (n < 0) cout << "NO";
        else{
            m = sqrt(n);
            if (m*m == n) cout << "YES";
                else cout << "NO";
        }
    return 0;
}
