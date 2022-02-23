#include <iostream>
using namespace std;

int main(){

    int am = 0,duong = 0,n,x;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x;
        if (x < 0) am++;
        if (x > 0) duong++;
    }
    if (am + duong < n){
        cout << -1;
        return 0;
    }
    cout << min(n-am,n-duong);
    return 0;
}
