#include <iostream>
using namespace std;

const int N = 1e6 + 3;
int d[N],n;

void snt(){

    static bool prime[N];
    for (int i = 2; i*i <= N; i++){
        if (!prime[i]){
            for (int j = i*i; j < N; j += i)
                prime[j] = true;
        }
    }
    for (int i = 2; i < N; i++){
        d[i] = d[i-1];
        if (!prime[i]) d[i]++;
    }
}
int main(){

    snt();
    int t,l,r;
    cin >> t;
    while (t--){
        cin >> l >> r;
        cout << d[r] - d[l-1] << "\n";
    }
    return 0;
}
