#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    long long gt = 1;
    double x,y = 1.0;
    cin >> x >> n;
    double s = 0;
    for (int i = 1; i <= n; i++){
        gt *= i;
        y *= x;
        s += (double)y/gt;
    }
    printf("%.2f", round(s*100) / 100.0);
    return 0;
}
