#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;
    cout << a + b << "\n" << a - b << "\n" << a*b << "\n";
    if (b == 0) cout << "INF";
        else cout << fixed << setprecision(2) << (float)a / b;
    return 0;
}
