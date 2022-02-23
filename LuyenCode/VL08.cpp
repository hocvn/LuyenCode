#include <iostream>
using namespace std;

int main(){

    long long a,b;
    cin >> a >> b;
    if (abs(a) & 1){
        if (a > 0) a--;
            else a++;
    }
    if (abs(b) & 1){
        if (b > 0) b--;
            else b++;
    }
    cout << (a+b)*((b-a)/2+1) / 2;
    return 0;
}
