#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    long long n;
    cin >> n;
    if (n <= 1) return cout << "NO", 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0){
            cout << "NO";
            return 0;
        }
    cout << "YES";
    return 0;
}
