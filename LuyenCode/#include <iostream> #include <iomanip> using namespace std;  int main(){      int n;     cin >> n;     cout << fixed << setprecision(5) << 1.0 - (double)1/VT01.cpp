#include <iostream>
using namespace std;

int main(){

    int n,x,res = -1e9;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x;
        res = max(res,x);
    }
    cout << res;
    return 0;
}
