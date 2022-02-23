#include <iostream>
using namespace std;

int main(){

    int n,x,y,cnt = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++){
        cin >> y;
        if (x == y) cnt++;
    }
    cout << cnt;
    return 0;
}
