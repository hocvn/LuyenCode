#include <iostream>
using namespace std;

int process(int x){

    int y = 0, z = x;
    while (x) { y += x % 10; x /= 10; }
    return z + y;
}
int main(){

    int n,m;
    cin >> n >> m;
    int cnt = 0;
    while (n <= m){
        cnt++;
        n = process(n);
    }
    cout << cnt;
    return 0;
}
