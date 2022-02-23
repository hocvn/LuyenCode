#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int a,b;
    bool check = true;
    cin >> a >> b;
    for (int i = b-1; i > a; i--){
        if (i % 3 == 0){
            cout << i << " ";
            check = false;
        }
    }
    if (check) cout << "NOT FOUND";
    return 0;
}
