#include <iostream>
using namespace std;

bool check(int n){

    while (n % 2 == 0) n /= 2;
    while (n % 5 == 0) n /= 5;
    return (n != 1) ? true : false;
}
int main(){

    long long n;
    cin >> n;
    if (check(n)) return cout << "NO", 0;
    long long m = 1;
    int cnt = 0;
    while (m % n != 0){
        cnt++;
        m = (m % n) * 10;
    }
    cout << cnt;
    return 0;
}
