#include <iostream>
using namespace std;

long long s[200005];
int n;

int main(){

    long long x;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x;
        s[i] = s[i-1] + x;
    }
    long long res = 1e9;
    for (int i = 1; i <= n; i++){
        res = min(res,abs(s[i] - (s[n] - s[i])));
    }
    cout << res;
    return 0;
}
