#include <iostream>
#include <cstring>
using namespace std;

int f[2505][2505];

int main(){

    char a[2005],b[2005];
    scanf("%s",a + 1);
    int n = strlen(a+1);
    for (int i = 1; i <= n; i++)
        b[i] = a[n-i+1];

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
                else f[i][j] = max(f[i-1][j],f[i][j-1]);
        }
    }
    cout << f[n][n];
    return 0;
}
