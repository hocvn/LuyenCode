#include <iostream>
using namespace std;

int main(){

    int k,s;
    cin >> k >> s;
    int cnt = 0;
    for (int x = 0; x <= k; x++){
        for (int y = 0; y <= min(s-x,k); y++)
            if (s-x-y <= k) cnt++;
    }
    cout << cnt;
    return 0;
}
