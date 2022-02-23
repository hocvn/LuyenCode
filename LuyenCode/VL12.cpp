#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    if (!n) return cout << "INF", 0;
    if (n < 0) n = -n;
    for (int i = n; i > 0; i--){
        if (n % i == 0) cout << i << " ";
    }
    return 0;
}
