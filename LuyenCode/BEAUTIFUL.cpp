#include <iostream>
using namespace std;

int dao(int x){

    int y = 0;
    while (x) { y = y*10 + x % 10; x /= 10; }
    return y;
}
int main(){

    int a,b,k,cnt = 0;
    cin >> a >> b >> k;
    for (int i = a; i <= b; i++){
        if ((i - dao(i)) %  k == 0) cnt++;
    }
    cout << cnt;
    return 0;
}
