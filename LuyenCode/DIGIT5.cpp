#include <iostream>
using namespace std;

int main(){

    int cnt = 0;
    auto dem = [&] (int x){
        while (x){
            if (x % 10 == 5) cnt++;
            x /= 10;
        }
    };
    long long l,r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
        dem(i);
    cout << cnt;
    return 0;
}
