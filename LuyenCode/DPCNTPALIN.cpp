#include <iostream>
#include <cstring>
using namespace std;

char s[1000];
int n, f[1000];
bool palin[1000][1000];

int main() {
  
    scanf("%s", s + 1);
    n = strlen(s + 1);
    for (int i = 1; i <= n; i++) {
        palin[i][i] = true;
        if (i < n && s[i] == s[i + 1])
            palin[i][i + 1] = true;
        f[i] = n;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            palin[j][j + i] = palin[j + 1][j + i - 1] && s[j] == s[j + i];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (palin[j][i])
                f[i] = min(f[i], f[j - 1] + 1);
        }
    }
    cout << f[n];
    return 0;
}
