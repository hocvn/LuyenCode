#include <iostream>
using namespace std;

int a[21],n,d = 0;

void print(){

    d++;
    for (int i = 1; i <= n; i++)
        if (a[i] == 0) cout << '(';
            else cout << ')';
    cout << endl;
}
void dequy(int j,int c){

    for (int i = 0; i < 2; i++){
        if (i == 0) c++;
            else c--;
        if (c > n/2 || j-c > c) continue;
        a[j] = i;
        if (j == n){
            print();
            return;
        }
        dequy(j+1,c);
    }
}
int main(){

    cin >> n;
    dequy(1,0);
    cout << d;
    return 0;
}
