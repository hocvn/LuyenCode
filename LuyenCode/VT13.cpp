#include <iostream>
using namespace std;

int main(){

    int n,a[10005];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    a[n] = a[0];
    int x,y;
    x = y = -1e8;
    for (int i = 0; i < n; i++){
        if (a[i] + a[i+1] > x + y){
            x = a[i];
            y = a[i+1];
        }
    }
    cout << x << " " << y;
    return 0;
}
