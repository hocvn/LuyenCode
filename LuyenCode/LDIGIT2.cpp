#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a,n;
    cin >> a >> n;
    a = a % 10;
    if (n == 0){
        cout << 1;
        return 0;
    }
    if (a == 0 || a == 1 || a == 5 || a == 6){
        cout << a;
    }
    else if (a == 4 || a == 9){
        n %= 2;
        if (n == 0) n = 2;
        cout << (int)pow(a,n) % 10;
    }
    else{
        n %= 4;
        if (n == 0) n = 4;
        cout << (int)pow(a,n) % 10;
    }
    return 0;
}
