#include <iostream>
#include <cstring>
using namespace std;

#define N 2002
const int mod = 1000000007;
long long f[N][N];
char s[N],t[N];
int n,m;

int main(){

    scanf("%s%s",s+1,t+1);
    n = strlen(s+1); 
    m = strlen(t+1);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            f[i][j] = (f[i-1][j] + f[i][j-1] - f[i-1][j-1] + mod) % mod;
            if (s[i] == t[j]) f[i][j] = (f[i][j] + f[i-1][j-1] + 1) % mod;
        }
    }
    printf("%lld",f[n][m]);
    return 0;
}
