#include <iostream>
#include <cstring>
using namespace std;

int f[2505][2505];

int main(){

    int n,m;
    char a[2505],b[2505];
    cin >> n >> m;
    scanf("%s\n%s",a + 1,b + 1);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
                else f[i][j] = max(f[i-1][j],f[i][j-1]);
        }
    }
    cout << f[n][m];
    return 0;
}
