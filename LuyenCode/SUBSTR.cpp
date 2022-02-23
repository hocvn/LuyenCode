#include <iostream>
#include <cstring>
using namespace std;

int f[2003][2003];
char s[2003],t[2003];

int main(){

    scanf("%s\n%s",s + 1, t + 1);
    int n = strlen(s+1);
    int m = strlen(t+1);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (s[i] == t[j]) f[i][j] = f[i-1][j-1] + 1;
                else f[i][j] = max(f[i-1][j],f[i][j-1]);
        }
    }
    cout << f[n][m];
    return 0;
}
