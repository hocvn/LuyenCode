#include <iostream>
using namespace std;

int main(){

    long long a,b;
    cin >> a >> b;
    if (a % 2 == 0) a++;
    if (b % 2 == 0) b--;
    cout << (a+b)*((b-a)/2+1) / 2;
    return 0;
}
