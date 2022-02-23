#include <iostream>
using namespace std;

int main(){

    int x, cnt = 0;
    do {
        cin >> x;
        if (x < 0) cout << x << " ", cnt++;
    }
    while (x != 0);
    if (cnt == 0) cout << "NOT FOUND";
    return 0;
}
