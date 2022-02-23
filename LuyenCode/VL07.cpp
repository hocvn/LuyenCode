#include <iostream>
using namespace std;

long long tohop(int n,int k){

    long long res = 1;
    for (int i = max(k,n-k)+1; i <= n; i++)
        res *= i;
    for (int i = 2; i <= min(k,n-k); i++)
        res /= i;
    return res;
}
int main(){

    int n,k;
    cin >> n >> k;
    cout << tohop(n,k);
    return 0;
}
