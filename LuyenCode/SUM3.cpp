#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int n;
    cin >> n;
    cout << fixed << setprecision(5) << 1.0 - (double)1/(n+1);
    return 0;
}
