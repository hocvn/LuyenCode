#include <iostream>
#include <string.h>
using namespace std;

long long a[1000],b[100];

int main(){

    int m,n;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    memset(a,0,sizeof(a));
    a[0] = 1;
    for (int i = 0; i < m; i++){
        for (int j = 0; j <= n; j++){
            a[j + b[i]] += a[j];
        }
    }
    cout << a[n];
    return 0;
}
