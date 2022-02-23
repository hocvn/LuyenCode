#include <iostream>
using namespace std;

int n,x[21];

void write(){

    for (int i = 1; i <= n; i++){
        cout << x[i];
    }
    cout << endl;
}
void dequy(int j){

    for (int i = 0; i < 2; i++){
        x[j] = i;
        if (j == n) write();
            else dequy(j+1);
    }
}
int main(){

    cin >> n;
    dequy(1);
    return 0;
}
