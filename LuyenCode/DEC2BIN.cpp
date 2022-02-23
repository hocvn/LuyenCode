#include <iostream>
using namespace std;

int luu[50];

void solve(long long x){

    int d = 0;
    while (x) {
        luu[d++] = x % 2;
        x /= 2;
    }
    for (int i = d; i > 0; i--)
        cout << luu[i-1];
    cout << "\n";
}
int main(){

    int t;
    long long x;
    scanf("%d",&t);
    while (t--){
        scanf("%lld",&x);
        solve(x);
    }
    return 0;
}
